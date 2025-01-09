// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperInputRegisters.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robotiq_3f_gripper_ros2_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_input_registers__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_3f_gripper_ros2_interfaces
cdr_serialize(
  const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_3f_gripper_ros2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_3f_gripper_ros2_interfaces
get_serialized_size(
  const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_3f_gripper_ros2_interfaces
max_serialized_size_Robotiq3FGripperInputRegisters(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robotiq_3f_gripper_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_3f_gripper_ros2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotiq_3f_gripper_ros2_interfaces, msg, Robotiq3FGripperInputRegisters)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
