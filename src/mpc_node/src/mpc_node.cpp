#include "rclcpp/rclcpp.hpp"
#include "common_msgs/msg/state.hpp" 
#include "common_msgs/msg/input.hpp" 
#include <px4_msgs/msg/sensor_combined.hpp>
#include <px4_msgs/msg/RaspberryPiToPixhawk.hpp>
#include <px4_msgs/msg/PixhawkToRaspberryPi.hpp>
#include "libs/grampc.hpp"
#include "grampcd/interface/dmpc_interface.hpp"
#include <memory>
#include <fstream>

class ControlNode : public rclcpp::Node
{
public:
    ControlNode() : Node("mpc_node"), iMPC(0)
    {
         /* *******************interface initialization*************************** */
        interface = std::make_shared<grampcd::DmpcInterface>();
        interface->initialize_central_communicationInterface();
        std::vector<typeRNum> xdes = { 0.0, 0.0 ,0.0 ,0.0 ,0.0 ,0.0 ,0.0 ,0.0 ,0.0 };
        std::vector<typeRNum> udes{ 0.0, 0.0 ,0.0 ,0.0 ,0.0 ,0.0 ,0.0 ,0.0};
        const std::string x_traj_file = "/home/ubuntu/UAV_ws/src/mpc_node/Traj/x_traj_rotor1_failure_3.txt";
        const std::string u_traj_file = "/home/ubuntu/UAV_ws/src/mpc_node/Traj/u_traj_rotor1_failure_3.txt";
        interface->setFilename("x_traj_file", x_traj_file);
        interface->setFilename("u_traj_file", u_traj_file);

        typeRNum x_init[9];
        typeRNum u_init[8];

        std::ifstream file(x_traj_file);
        bool fo = file.is_open();

        interface->lineReader(x_init, 9,x_traj_file, 1);
        interface->lineReader(u_init, 8,u_traj_file, 1);

        interface->lineReader(interface->ui, 8,u_traj_file, 1);

        std::vector<typeRNum> xinit;
        std::vector<typeRNum> uinit;
        xinit.assign(x_init,x_init + 9);
        uinit.assign(u_init,u_init + 8);

        
        // set optimization info
        auto optimization_info = interface->optimization_info();
        optimization_info.COMMON_Nhor_ = 11;
        optimization_info.COMMON_Thor_ = 0.3;
        optimization_info.COMMON_dt_ = 0.01;
        optimization_info.GRAMPC_MaxGradIter_ = 1000;
        optimization_info.GRAMPC_MaxMultIter_ = 1;
        optimization_info.GRAMPC_ConvergenceCheck_ = "on";
        optimization_info.GRAMPC_ConvergenceGradientRelTol_ = 1e-6;
        
        optimization_info.COMMON_Solver_ = "ADMM";
        optimization_info.ADMM_maxIterations_ = 10;
        optimization_info.ADMM_ConvergenceTolerance_ = 0.02;
        optimization_info.COMMON_DebugCost_ = false;

        bool approx = true;
        optimization_info.APPROX_ApproximateCost_ = approx;
        optimization_info.APPROX_ApproximateConstraints_ = approx;
        optimization_info.APPROX_ApproximateDynamics_ = approx;

        optimization_info.ASYNC_Active_ = false;
        optimization_info.ASYNC_Delay_ = 0;

        interface->set_optimizationInfo(optimization_info);

        const typeRNum Tsim = 3.3;

        // parameters for cost function
        typeRNum Q[9] = {20,20,20,20,20,20,20,20,20};
        typeRNum R[8] = {10,10,10,10,10,10,10,10};
        typeRNum cost_parameters[9 + 8]; 
        std::copy(Q, Q + 9, cost_parameters);
        std::copy(R, R + 8, cost_parameters + 9);

        // parameters for model
        int num_xtraj = (optimization_info.COMMON_Thor_/optimization_info.COMMON_dt_ +1)*9;  
        int num_utraj = (optimization_info.COMMON_Thor_/optimization_info.COMMON_dt_ +1)*8;
        typeRNum model_parameters[num_xtraj + num_utraj + 2];

        model_parameters[0] = optimization_info.COMMON_Thor_;
        model_parameters[1] = optimization_info.COMMON_dt_ ;

        auto agent = interface->agent_info();
        agent.model_name_ = "UAV_agentModel";

        int agent_id = 1;
    	agent.id_ = agent_id;
        agent.model_parameters_.assign(model_parameters, model_parameters + num_xtraj + num_utraj + 2);
        agent.cost_parameters_.assign(cost_parameters,cost_parameters + 9 + 8);     
        interface->register_agent(agent, xinit, uinit, xdes, udes);
       

        /* ******************************************************************** */

        publisher_ = this->create_publisher<common_msgs::msg::Input>("control_input", 10);

        subscriber_ = this->create_subscription<common_msgs::msg::State>(
            "new_state", 10, std::bind(&ControlNode::compute_and_publish_input, this, std::placeholders::_1));
        subscription_ = this->create_subscription<px4_msgs::msg::SensorCombined>(
			"SensorCombined_PubSubTopic",
			10,
			[this](const px4_msgs::msg::SensorCombined::UniquePtr msg) {
			std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			std::cout << "RECEIVED SENSOR COMBINED DATA"   << std::endl;
			std::cout << "============================="   << std::endl;
			std::cout << "ts: "          << msg->timestamp    << std::endl;
			std::cout << "gyro_rad[0]: " << msg->gyro_rad[0]  << std::endl;
			std::cout << "gyro_rad[1]: " << msg->gyro_rad[1]  << std::endl;
			std::cout << "gyro_rad[2]: " << msg->gyro_rad[2]  << std::endl;
			std::cout << "gyro_integral_dt: " << msg->gyro_integral_dt << std::endl;
			std::cout << "accelerometer_timestamp_relative: " << msg->accelerometer_timestamp_relative << std::endl;
			std::cout << "accelerometer_m_s2[0]: " << msg->accelerometer_m_s2[0] << std::endl;
			std::cout << "accelerometer_m_s2[1]: " << msg->accelerometer_m_s2[1] << std::endl;
			std::cout << "accelerometer_m_s2[2]: " << msg->accelerometer_m_s2[2] << std::endl;
			std::cout << "accelerometer_integral_dt: " << msg->accelerometer_integral_dt << std::endl;
		});
    }

private:
    void compute_and_publish_input(const common_msgs::msg::State::SharedPtr msg)
    {

        if (iMPC > 330)
        {
            return;
        }
        
        interface->iMPC = iMPC;

        for (int i = 0; i < 9; ++i)
        {
            interface->x_next[i] = msg->state[i]; 
        }

        const typeRNum Tsim = 3.3;

        const auto tstart = std::chrono::steady_clock::now();
        interface->run_MPC (0,Tsim);
		const auto tend = std::chrono::steady_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(tend - tstart).count();

        RCLCPP_INFO(this->get_logger(), "Program runtime: %ld ms.", duration);
  
        publish_ui(interface->ui);
    }

    void publish_ui(const double* ui)
    {
        auto message = common_msgs::msg::Input();
        for (int i = 0; i < 8; ++i)
        {
            message.input[i] = ui[i];
        }
        publisher_->publish(message);
        iMPC++;

        std::stringstream ss;
        ss << "Published Input: [";
        for (const auto& value : message.input) {
        ss << value << ", ";
        }
        ss << "]";
        RCLCPP_INFO(this->get_logger(), "%s", ss.str().c_str());
        
    }

    rclcpp::Publisher<common_msgs::msg::Input>::SharedPtr publisher_;
    rclcpp::Subscription<common_msgs::msg::State>::SharedPtr subscriber_;
    int iMPC;
    std::shared_ptr<grampcd::DmpcInterface> interface;
    rclcpp::Subscription<px4_msgs::msg::SensorCombined>::SharedPtr subscription_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ControlNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
