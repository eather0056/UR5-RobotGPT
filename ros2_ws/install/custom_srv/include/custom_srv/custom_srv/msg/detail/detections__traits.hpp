// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_srv:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__MSG__DETAIL__DETECTIONS__TRAITS_HPP_
#define CUSTOM_SRV__MSG__DETAIL__DETECTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_srv/msg/detail/detections__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'detections'
#include "custom_srv/msg/detail/detection__traits.hpp"

namespace custom_srv
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detections & msg,
  std::ostream & out)
{
  out << "{";
  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detections & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detections & msg, bool use_flow_style = false)
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
  const custom_srv::msg::Detections & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_srv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_srv::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_srv::msg::Detections & msg)
{
  return custom_srv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_srv::msg::Detections>()
{
  return "custom_srv::msg::Detections";
}

template<>
inline const char * name<custom_srv::msg::Detections>()
{
  return "custom_srv/msg/Detections";
}

template<>
struct has_fixed_size<custom_srv::msg::Detections>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_srv::msg::Detections>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_srv::msg::Detections>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_SRV__MSG__DETAIL__DETECTIONS__TRAITS_HPP_
