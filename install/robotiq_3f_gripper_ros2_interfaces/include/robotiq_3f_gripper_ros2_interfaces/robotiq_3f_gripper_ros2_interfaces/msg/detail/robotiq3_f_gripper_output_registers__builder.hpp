// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperOutputRegisters.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__BUILDER_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_Robotiq3FGripperOutputRegisters_r_fra
{
public:
  explicit Init_Robotiq3FGripperOutputRegisters_r_fra(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters & msg)
  : msg_(msg)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters r_fra(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters::_r_fra_type arg)
  {
    msg_.r_fra = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters msg_;
};

class Init_Robotiq3FGripperOutputRegisters_r_spa
{
public:
  explicit Init_Robotiq3FGripperOutputRegisters_r_spa(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperOutputRegisters_r_fra r_spa(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters::_r_spa_type arg)
  {
    msg_.r_spa = std::move(arg);
    return Init_Robotiq3FGripperOutputRegisters_r_fra(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters msg_;
};

class Init_Robotiq3FGripperOutputRegisters_r_pra
{
public:
  explicit Init_Robotiq3FGripperOutputRegisters_r_pra(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperOutputRegisters_r_spa r_pra(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters::_r_pra_type arg)
  {
    msg_.r_pra = std::move(arg);
    return Init_Robotiq3FGripperOutputRegisters_r_spa(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters msg_;
};

class Init_Robotiq3FGripperOutputRegisters_r_atr
{
public:
  explicit Init_Robotiq3FGripperOutputRegisters_r_atr(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperOutputRegisters_r_pra r_atr(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters::_r_atr_type arg)
  {
    msg_.r_atr = std::move(arg);
    return Init_Robotiq3FGripperOutputRegisters_r_pra(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters msg_;
};

class Init_Robotiq3FGripperOutputRegisters_r_gto
{
public:
  explicit Init_Robotiq3FGripperOutputRegisters_r_gto(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperOutputRegisters_r_atr r_gto(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters::_r_gto_type arg)
  {
    msg_.r_gto = std::move(arg);
    return Init_Robotiq3FGripperOutputRegisters_r_atr(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters msg_;
};

class Init_Robotiq3FGripperOutputRegisters_r_mod
{
public:
  explicit Init_Robotiq3FGripperOutputRegisters_r_mod(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperOutputRegisters_r_gto r_mod(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters::_r_mod_type arg)
  {
    msg_.r_mod = std::move(arg);
    return Init_Robotiq3FGripperOutputRegisters_r_gto(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters msg_;
};

class Init_Robotiq3FGripperOutputRegisters_r_act
{
public:
  Init_Robotiq3FGripperOutputRegisters_r_act()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robotiq3FGripperOutputRegisters_r_mod r_act(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters::_r_act_type arg)
  {
    msg_.r_act = std::move(arg);
    return Init_Robotiq3FGripperOutputRegisters_r_mod(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>()
{
  return robotiq_3f_gripper_ros2_interfaces::msg::builder::Init_Robotiq3FGripperOutputRegisters_r_act();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__BUILDER_HPP_
