from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='serving_robot',
            executable='KitchenGui',
            output='screen',
        ),
        Node(
            package='serving_robot',
            executable='robot_control',
            output='screen',
        ),
        Node(
            package='table_order',
            executable='table_order',
            output='screen'
        )
    ])
