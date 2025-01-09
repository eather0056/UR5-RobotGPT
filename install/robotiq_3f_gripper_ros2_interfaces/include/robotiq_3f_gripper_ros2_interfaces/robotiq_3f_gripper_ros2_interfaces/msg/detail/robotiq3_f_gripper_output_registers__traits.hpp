// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperOutputRegisters.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__TRAITS_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputRegisters & msg,
  std::ostream & out)
{
  out << "{";
  // member: r_act
  {
    out << "r_act: ";
    rosidl_generator_traits::value_to_yaml(msg.r_act, out);
    out << ", ";
  }

  // member: r_mod
  {
    out << "r_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.r_mod, out);
    out << ", ";
  }

  // member: r_gto
  {
    out << "r_gto: ";
    rosidl_generator_traits::value_to_yaml(msg.r_gto, out);
    out << ", ";
  }

  // member: r_atr
  {
    out << "r_atr: ";
    rosidl_generator_traits::value_to_yaml(msg.r_atr, out);
    out << ", ";
  }

  // member: r_pra
  {
    out << "r_pra: ";
    rosidl_generator_traits::value_to_yaml(msg.r_pra, out);
    out << ", ";
  }

  // member: r_spa
  {
    out << "r_spa: ";
    rosidl_generator_traits::value_to_yaml(msg.r_spa, out);
    out << ", ";
  }

  // member: r_fra
  {
    out << "r_fra: ";
    rosidl_generator_traits::value_to_yaml(msg.r_fra, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputRegisters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r_act
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_act: ";
    rosidl_generator_traits::value_to_yaml(msg.r_act, out);
    out << "\n";
  }

  // member: r_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.r_mod, out);
    out << "\n";
  }

  // member: r_gto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_gto: ";
    rosidl_generator_traits::value_to_yaml(msg.r_gto, out);
    out << "\n";
  }

  // member: r_atr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_atr: ";
    rosidl_generator_traits::value_to_yaml(msg.r_atr, out);
    out << "\n";
  }

  // member: r_pra
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_pra: ";
    rosidl_generator_traits::value_to_yaml(msg.r_pra, out);
    out << "\n";
  }

  // member: r_spa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_spa: ";
    rosidl_generator_traits::value_to_yaml(msg.r_spa, out);
    out << "\n";
  }

  // member: r_fra
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_fra: ";
    rosidl_generator_traits::value_to_yaml(msg.r_fra, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputRegisters & msg, bool use_flow_style = false)
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
  const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>()
{
  return "robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>()
{
  return "robotiq_3f_gripper_ros2_interfaces/msg/Robotiq3FGripperOutputRegisters";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__TRAITS_HPP_
