# UR5-RobotGPT


https://moveit.ai/install-moveit2/binary/

https://github.com/ros-industrial-attic/robotiq




ros2 launch ur_moveit_config ur_moveit.launch.py ur_type:=ur5e
ros2 launch ur_robot_driver ur_control.launch.py ur_type:=ur5e robot_ip:=192.168.1.2

ros2 control list_controllers

ros2 control set_controller_state scaled_joint_trajectory_controller active



For connecting the robot with the ros humble interface use this instruction for UR5e robot
https://docs.universal-robots.com/Universal_Robots_ROS2_Documentation/doc/ur_robot_driver/ur_robot_driver/doc/installation/install_urcap_e_series.html

Build the Universal_Robots_ROS2_Driver package based on your ros distribution from here:
https://github.com/UniversalRobots/Universal_Robots_ROS2_Driver.git

# Replace ur5e with one of ur3, ur3e, ur5, ur5e, ur10, ur10e, ur16e, ur20, ur30
# Replace the IP address with the IP address of your actual robot / URSim
ros2 launch ur_robot_driver ur_control.launch.py ur_type:=ur5e robot_ip:=192.168.1.2

This in your computer Then in the HMI first run the rebot and then run the program you created

you can find all robot urdf datasect from here:
https://github.com/Daniella1/urdf_files_dataset/tree/main


Aftr running the program you can all all controller list that runnung in the system by:
ros2 control list_controllers


if you want to activate spacific controller you can use this command:
ros2 control set_controller_state scaled_joint_trajectory_controller active