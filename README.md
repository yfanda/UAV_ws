This ros2 repository implements a MPC node to control the UAV transit from an unsafe situation(hover flight with rotor 1 failed)  to a safe situation(aerodynamic flight).

## Devloping Environemt
- Ubuntu Server 20.04.6 LTS
- ROS2 Foxy
- PX4 Autopilot 1.12.3
## Fast DDS install
### java version 
    sudo apt update
    java -version
    sudo apt install default-jre  # java 11 recommendend
### sdkmann
    curl -s "https://get.sdkman.io" | bash
    source "/home/userXXX/.sdkman/bin/sdkman-init.sh"
    sdk version #check sdk version  5.13
### install gradle 6.3
    sdk install gradle 6.3
### Foonathan memory
    git clone https://github.com/eProsima/foonathan_memory_vendor.git
    cd foonathan_memory_vendor
    mkdir build && cd build
    cmake ..
    cmake --build . --target install ## if this step fails, running the command with sudo

### Fast DDS
    git clone --recursive https://github.com/eProsima/Fast-DDS.git -b v2.0.2 ~/FastDDS-2.0.2
    cd ~/FastDDS-2.0.2
    mkdir build && cd build
    cmake -DTHIRDPARTY=ON -DSECURITY=ON ..
    make -j$(nproc --all)
    sudo make install
### Fast-RTPS-Gen (= 1.04)
    git clone --recursive https://github.com/eProsima/Fast-DDS-Gen.git -b v1.0.4 ~/Fast-RTPS-Gen \
    && cd ~/Fast-RTPS-Gen \
    && gradle assemble \
    && sudo env "PATH=$PATH" gradle install

## ROS2 Workspace install
### install dependencies
    sudo apt install python3-colcon-common-extensions
    sudo apt install ros-foxy-eigen3-cmake-module
    sudo pip3 install -U empy pyros-genmsg setuptools # if pip3 not install, then, sudo apt install python3-pip
### clone the relevant repositories
    git clone -b raspi https://github.com/yfanda/UAV_ws.git
    cd ~/UAV_ws/src
    git clone git@git-ce.rwth-aachen.de:tuda-fsr/hardware-in-the-loop-pruefstand/px4_msgs.git
    git clone git@git-ce.rwth-aachen.de:tuda-fsr/hardware-in-the-loop-pruefstand/px4_ros_com.git
### Note
- in `src/grampc-d/CMakeLists.txt`, line 63 and 64, the follow paths has to be modified to the current path in user pc
  - `set(ASIO_INCLUDE_DIR "/home/ubuntu/UAV_ws/src/libs/libs/asio/src/asio/asio/include")`
  - `set(CEREAL_INCLUDE_DIR "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal/include")`
- in `src/simulator_node/src/simulator_node.cpp` and `src/mpc_node/src/mpc_node.cpp`,the follow paths has to be modified to the current path in user pc
  - `const std::string x_traj_file = "/home/ubuntu/UAV_ws/src/mpc_node/Traj/x_traj_rotor1_failure_3.txt";`
  - `const std::string u_traj_file = "/home/ubuntu/UAV_ws/src/mpc_node/Traj/u_traj_rotor1_failure_3.txt";`    

### build ros2 workspace    
    cd ~/UAV_ws/src/px4_ros_com/scripts
    source build_ros2_workspace.bash
### check the Installation
source this workspace and check if a `micrortps agent` could be created
```bash
cd ~/UAV_ws
source install/setup.bash
micrortps_agent -t UDP 
```
check mpc node
```bash
ros2 run mpc_node mpc_node_exe 
```
the mpc node subscirbes  the UAV state-message and publishes the control input 

### test using a launch file
```bash
ros2 launch uav_launch uav_launch.py 
```
