cmake_minimum_required(VERSION 3.8)
project(grampc-d)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(libs REQUIRED)

#########################################################################################

#########################################################################################
# compile all source files into library
set(CMAKE_CXX_STANDARD 17)
add_library(grampcd
    src/agent/agent.cpp
    src/agent/neighbor.cpp
    src/coord/coordinator.cpp
    src/simulator/simulator.cpp
      
    src/interface/interface.cpp
    src/interface/dmpc_interface.cpp

    src/comm/communication_interface.cpp
    src/comm/communication_interface_central.cpp  
    src/comm/communication_interface_local.cpp    
    src/comm/message_handler.cpp    
    src/comm/message.cpp    
    src/comm/message_definition.cpp

    src/model/agent_model.cpp
    src/model/coupling_model.cpp
    src/model/model_factory.cpp

    src/optim/optim_util.cpp
    src/util/data_conversion.cpp
    
    src/util/logging.cpp
    src/optim/solution.cpp

    src/optim/solver_central.cpp
    src/optim/solver_local.cpp
    src/optim/solver_local_admm.cpp
    src/optim/solver_local_sensi.cpp

    src/optim/problem_description_central.cpp
    src/optim/problem_description_local_default.cpp
    src/optim/problem_description_local_neighbor_approximation.cpp
    src/optim/problem_description_local_sensi.cpp
    src/optim/approximate_neighbor.cpp
    src/util/auto_tune.cpp
    src/agent/step_selector.cpp
    src/agent/sync_step_selector.cpp
    src/agent/async_step_selector.cpp
    src/general_model_factory.cpp
    src/UAV_agent_model.cpp
 )

set(ASIO_INCLUDE_DIR "/home/ubuntu/UAV_ws/src/libs/libs/asio/src/asio/asio/include")
set(CEREAL_INCLUDE_DIR "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal/include")

target_include_directories(grampcd PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${ASIO_INCLUDE_DIR}
  ${CEREAL_INCLUDE_DIR}
)
 
ament_target_dependencies(grampcd
    libs
    rclcpp 
    std_msgs)
    
 

# this line to exports the library
ament_export_targets(grampcd HAS_LIBRARY_TARGET)

# install the include/my_cpp_library directory to the install/include/my_cpp_library
install(
  DIRECTORY include/grampcd
  DESTINATION include
)

install(
  TARGETS grampcd
  EXPORT grampcd
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
