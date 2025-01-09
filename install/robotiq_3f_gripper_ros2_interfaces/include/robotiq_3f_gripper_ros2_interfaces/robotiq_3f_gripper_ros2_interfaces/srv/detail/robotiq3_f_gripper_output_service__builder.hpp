// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:srv/Robotiq3FGripperOutputService.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__BUILDER_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_3f_gripper_ros2_interfaces/srv/detail/robotiq3_f_gripper_output_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace srv
{

namespace builder
{

class Init_Robotiq3FGripperOutputService_Request_output_registers
{
public:
  Init_Robotiq3FGripperOutputService_Request_output_registers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request output_registers(::robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request::_output_registers_type arg)
  {
    msg_.output_registers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>()
{
  return robotiq_3f_gripper_ros2_interfaces::srv::builder::Init_Robotiq3FGripperOutputService_Request_output_registers();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace srv
{

namespace builder
{

class Init_Robotiq3FGripperOutputService_Response_success
{
public:
  Init_Robotiq3FGripperOutputService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response success(::robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>()
{
  return robotiq_3f_gripper_ros2_interfaces::srv::builder::Init_Robotiq3FGripperOutputService_Response_success();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__BUILDER_HPP_
