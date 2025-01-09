// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperInputRegisters.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__TRAITS_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_input_registers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperInputRegisters & msg,
  std::ostream & out)
{
  out << "{";
  // member: g_act
  {
    out << "g_act: ";
    rosidl_generator_traits::value_to_yaml(msg.g_act, out);
    out << ", ";
  }

  // member: g_mod
  {
    out << "g_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.g_mod, out);
    out << ", ";
  }

  // member: g_gto
  {
    out << "g_gto: ";
    rosidl_generator_traits::value_to_yaml(msg.g_gto, out);
    out << ", ";
  }

  // member: g_imc
  {
    out << "g_imc: ";
    rosidl_generator_traits::value_to_yaml(msg.g_imc, out);
    out << ", ";
  }

  // member: g_sta
  {
    out << "g_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.g_sta, out);
    out << ", ";
  }

  // member: g_flt
  {
    out << "g_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.g_flt, out);
    out << ", ";
  }

  // member: g_pra
  {
    out << "g_pra: ";
    rosidl_generator_traits::value_to_yaml(msg.g_pra, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperInputRegisters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: g_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_act: ";
    rosidl_generator_traits::value_to_yaml(msg.g_act, out);
    out << "\n";
  }

  // member: g_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.g_mod, out);
    out << "\n";
  }

  // member: g_gto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_gto: ";
    rosidl_generator_traits::value_to_yaml(msg.g_gto, out);
    out << "\n";
  }

  // member: g_imc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_imc: ";
    rosidl_generator_traits::value_to_yaml(msg.g_imc, out);
    out << "\n";
  }

  // member: g_sta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_sta: ";
    rosidl_generator_traits::value_to_yaml(msg.g_sta, out);
    out << "\n";
  }

  // member: g_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.g_flt, out);
    out << "\n";
  }

  // member: g_pra
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_pra: ";
    rosidl_generator_traits::value_to_yaml(msg.g_pra, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperInputRegisters & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>()
{
  return "robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>()
{
  return "robotiq_3f_gripper_ros2_interfaces/msg/Robotiq3FGripperInputRegisters";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__TRAITS_HPP_
