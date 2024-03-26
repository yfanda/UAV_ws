#include "rclcpp/rclcpp.hpp"
#include "common_msgs/msg/input.hpp"  // 替换为适当的消息类型
#include "common_msgs/msg/state.hpp"  // 替换为适当的消息类型
#include "grampcd/interface/dmpc_interface.hpp"
#include <fstream>

class SimulatorNode : public rclcpp::Node
{
public:
    SimulatorNode() : Node("simulator_node")
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
        publisher_ = this->create_publisher<common_msgs::msg::State>("new_state", 10);
        state_publisher_ = this->create_publisher<common_msgs::msg::State>("new_state", 10);
        publishNewState();        
        subscriber_ = this->create_subscription<common_msgs::msg::Input>(
            "control_input", 10, std::bind(&SimulatorNode::ui_callback, this, std::placeholders::_1));

       
    }

private:
    void publishNewState()
    {
        // interface = std::make_shared<grampcd::DmpcInterface>();
        // interface->simulate_UAV(interface->ui);

        /* typeRNum u_test[8];
        const std::string u_real = "/home/evan/UAV_ws/src/mpc_node/Traj/u_input_real.txt";
        for (int itest = 1; itest < 100; itest++ )
        {
            interface->lineReader(u_test, 8,u_real, itest);
            interface->simulate_UAV(u_test);
            std::stringstream ss;
            ss << "Published state: [";
            for (const auto& value : interface->x_next) {
            ss << value << ", ";
        }
        ss << "]";
        RCLCPP_INFO(this->get_logger(), "%s", ss.str().c_str());
        }
 */
        const std::string x_traj_file = "/home/ubuntu/UAV_ws/src/mpc_node/Traj/x_traj_rotor1_failure_3.txt";
        interface->lineReader(interface->x_next, 9, x_traj_file, 1);
        auto message = common_msgs::msg::State();
        for (int i = 0; i < 9; ++i)
            {
                message.state[i] = interface->x_next[i];
            }

        state_publisher_->publish(message);
        std::stringstream ss;
        ss << "Published state: [";
        for (const auto& value : message.state) {
        ss << value << ", ";
        }
        ss << "]";
        RCLCPP_INFO(this->get_logger(), "%s", ss.str().c_str());
    }
    void ui_callback(const common_msgs::msg::Input::SharedPtr msg)
    {
        typeRNum ui[8];
        for (int i = 0; i < 8; ++i)
        {
            ui[i] = msg->input[i];
        }

        interface->simulate_UAV(ui);
        
        auto x_next_msg = common_msgs::msg::State();
        for (int i = 0; i < 9; ++i)
        {
            x_next_msg.state[i] = interface->x_next[i];
        }

        // 发布x_next消息
        publisher_->publish(x_next_msg);

        std::stringstream ss;
        ss << "Published state: [";
        for (const auto& value : x_next_msg.state) {
        ss << value << ", ";
        }
        ss << "]";
        RCLCPP_INFO(this->get_logger(), "%s", ss.str().c_str());
    }

    void publishStateMessage()
    {
        
    }

    rclcpp::Publisher<common_msgs::msg::State>::SharedPtr publisher_;
    rclcpp::Subscription<common_msgs::msg::Input>::SharedPtr subscriber_;
    std::shared_ptr<grampcd::DmpcInterface> interface;

    /*******************************************************************************/
    rclcpp::Publisher<common_msgs::msg::State>::SharedPtr state_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    /*******************************************************************************/
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SimulatorNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
