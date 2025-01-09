// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperInputRegisters.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__BUILDER_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_input_registers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_Robotiq3FGripperInputRegisters_g_pra
{
public:
  explicit Init_Robotiq3FGripperInputRegisters_g_pra(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & msg)
  : msg_(msg)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters g_pra(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters::_g_pra_type arg)
  {
    msg_.g_pra = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters msg_;
};

class Init_Robotiq3FGripperInputRegisters_g_flt
{
public:
  explicit Init_Robotiq3FGripperInputRegisters_g_flt(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperInputRegisters_g_pra g_flt(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters::_g_flt_type arg)
  {
    msg_.g_flt = std::move(arg);
    return Init_Robotiq3FGripperInputRegisters_g_pra(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters msg_;
};

class Init_Robotiq3FGripperInputRegisters_g_sta
{
public:
  explicit Init_Robotiq3FGripperInputRegisters_g_sta(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperInputRegisters_g_flt g_sta(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters::_g_sta_type arg)
  {
    msg_.g_sta = std::move(arg);
    return Init_Robotiq3FGripperInputRegisters_g_flt(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters msg_;
};

class Init_Robotiq3FGripperInputRegisters_g_imc
{
public:
  explicit Init_Robotiq3FGripperInputRegisters_g_imc(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperInputRegisters_g_sta g_imc(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters::_g_imc_type arg)
  {
    msg_.g_imc = std::move(arg);
    return Init_Robotiq3FGripperInputRegisters_g_sta(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters msg_;
};

class Init_Robotiq3FGripperInputRegisters_g_gto
{
public:
  explicit Init_Robotiq3FGripperInputRegisters_g_gto(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperInputRegisters_g_imc g_gto(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters::_g_gto_type arg)
  {
    msg_.g_gto = std::move(arg);
    return Init_Robotiq3FGripperInputRegisters_g_imc(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters msg_;
};

class Init_Robotiq3FGripperInputRegisters_g_mod
{
public:
  explicit Init_Robotiq3FGripperInputRegisters_g_mod(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & msg)
  : msg_(msg)
  {}
  Init_Robotiq3FGripperInputRegisters_g_gto g_mod(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters::_g_mod_type arg)
  {
    msg_.g_mod = std::move(arg);
    return Init_Robotiq3FGripperInputRegisters_g_gto(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters msg_;
};

class Init_Robotiq3FGripperInputRegisters_g_act
{
public:
  Init_Robotiq3FGripperInputRegisters_g_act()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robotiq3FGripperInputRegisters_g_mod g_act(::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters::_g_act_type arg)
  {
    msg_.g_act = std::move(arg);
    return Init_Robotiq3FGripperInputRegisters_g_mod(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>()
{
  return robotiq_3f_gripper_ros2_interfaces::msg::builder::Init_Robotiq3FGripperInputRegisters_g_act();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__BUILDER_HPP_
