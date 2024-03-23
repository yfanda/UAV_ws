from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mpc_node', 
            executable='mpc_node_exe', 
            name='mpc_node',
            output='screen'
        ),
        Node(
            package='simulator_node', 
            executable='simulator_node_exe',  
            name='simulator_node',
            output='screen'
        ),
    ])
