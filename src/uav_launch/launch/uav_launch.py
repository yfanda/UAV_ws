from launch import LaunchDescription
from launch.actions import TimerAction
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mpc_node', 
            executable='mpc_node_exe', 
            name='mpc_node',
            output='screen'
            
        ),
        TimerAction(
            period=5.0,  # 5秒延时
            actions=[
                Node(
                    package='simulator_node', 
		    executable='simulator_node_exe', 
		    name='simulator_node',
		    output='screen'
                )
            ]
        )
    ])

