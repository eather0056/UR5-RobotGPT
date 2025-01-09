// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_srv:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define CUSTOM_SRV__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_srv/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace custom_srv
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: centroid
  {
    out << "centroid: ";
    to_flow_style_yaml(msg.centroid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_block_style_yaml(msg.centroid, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
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

}  // namespace custom_srv

namespace rosidl_generator_traits
{

[[deprecated("use custom_srv::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_srv::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_srv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_srv::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_srv::msg::Detection & msg)
{
  return custom_srv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_srv::msg::Detection>()
{
  return "custom_srv::msg::Detection";
}

template<>
inline const char * name<custom_srv::msg::Detection>()
{
  return "custom_srv/msg/Detection";
}

template<>
struct has_fixed_size<custom_srv::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_srv::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_srv::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_SRV__MSG__DETAIL__DETECTION__TRAITS_HPP_
