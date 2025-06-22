from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    world_file_path = PathJoinSubstitution([
        get_package_share_directory('ignition_lecture'),
        'worlds',
        'basic_world1.sdf'
    ])

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist@ignition.msgs.Twist',
            '/scan@sensor_msgs/msg/LaserScan@ignition.msgs.LaserScan'
        ]
    )

    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([os.path.join(
                get_package_share_directory('ros_gz_sim'), 'launch'), '/gz_sim.launch.py']),
            launch_arguments=[
                ('gz_args', world_file_path)]
        ),
        bridge
    ])
