# UR5 Robot Control and Object Manipulation

This repository provides a comprehensive framework for controlling a UR5e robotic arm, integrating object detection capabilities, and enabling advanced manipulation tasks. The setup includes ROS2, YOLO-based object detection, and a Robotiq 3-Finger Adaptive Gripper.

## Directory Structure

```bash
UR5-RobotGPT/
├── build
├── config
├── docs
├── install
├── LICENSE
├── log
├── README.md
├── ros2_ws
│   ├── best.pt
│   ├── build
│   ├── install
│   ├── log
│   ├── src
│   │   ├── custom_srv
│   │   ├── video_publisher
│   └── yolov8n.pt
├── src
│   ├── robotiq_3f_gripper_ros2_stack
│   └── ur5e_control
└── urdf_files_dataset-main
```

## Prerequisites

### 1. System Requirements
- Ubuntu 22.04 or later
- ROS2 Humble or Galactic
- Python 3.8+
- GPU with CUDA for object detection (optional)

### 2. Dependencies
Install the following dependencies:

```bash
sudo apt update && sudo apt install -y \
    python3-pip \
    ros-humble-desktop \
    colcon-common-extensions \
    ros-humble-moveit

pip install pymodbus torch torchvision numpy scipy
```

### 3. Clone the Repository

```bash
git clone https://github.com/yourusername/UR5-RobotGPT.git
cd UR5-RobotGPT
```

## Setup Instructions

### 1. Universal Robots ROS2 Driver

- Clone and build the Universal Robots ROS2 Driver:

```bash
git clone https://github.com/UniversalRobots/Universal_Robots_ROS2_Driver.git ~/ros_ws/src
cd ~/ros_ws
rosdep install -y -r -i --from-paths .
colcon build
source install/setup.bash
```

- Launch the UR5e driver with the following commands:

```bash
ros2 launch ur_moveit_config ur_moveit.launch.py ur_type:=ur5e
ros2 launch ur_robot_driver ur_control.launch.py ur_type:=ur5e robot_ip:=192.168.1.2
ros2 control set_controller_state scaled_joint_trajectory_controller active
```

### 2. Robotiq 3-Finger Gripper

- Navigate to the `src/robotiq_3f_gripper_ros2_stack` directory and follow the setup instructions in its README.

- To control the gripper, launch the gripper control nodes:

```bash
ros2 run robotiq_3f_gripper_ros2_control gripper_control_listener_node
```

### 3. Object Detection

- Place the YOLO models (`yolov8n.pt`, `yolo11m-pose.pt`) in the `ros2_ws` directory.

- Use the `video_publisher` package to stream video data:

```bash
ros2 run video_publisher video_publisher_node
```

### 4. Custom Services

- Build the custom service package:

```bash
cd ros2_ws/src/custom_srv
colcon build
source install/setup.bash
```

- Run the custom service nodes:

```bash
ros2 run custom_srv service_server
```

## Execution Workflow

1. Start the robot and gripper drivers.
2. Launch the object detection nodes to identify objects in the workspace.
3. Use the `ur5e_control` package to execute robot motion tasks:

```bash
ros2 run ur5e_control ur5e_control_node
```

4. Combine object detection and robot control for autonomous manipulation tasks.

## Key Features

- **Flexible Robot Control:** Inverse kinematics and trajectory planning using `ikpy` and MoveIt 2.
- **Advanced Gripper Control:** Adaptive grasping with the Robotiq 3-Finger Gripper.
- **Object Detection Integration:** Real-time object detection using YOLO models.

## Troubleshooting

- **Controller Issues:** Ensure controllers are listed and active:

```bash
ros2 control list_controllers
```

- **Communication Errors:** Verify network connectivity between the robot and the ROS2 host.

- **Dependency Conflicts:** Rebuild the workspace:

```bash
cd ~/UR5-RobotGPT/ros2_ws
colcon build --merge-install
source install/setup.bash
```

## License
This repository is licensed under the MIT License. See `LICENSE` for details.

## Acknowledgments

- [Universal Robots ROS2 Driver](https://github.com/UniversalRobots/Universal_Robots_ROS2_Driver)
- [YOLO Object Detection Models](https://github.com/ultralytics/yolov5)
- [MoveIt 2](https://moveit.ros.org/)
