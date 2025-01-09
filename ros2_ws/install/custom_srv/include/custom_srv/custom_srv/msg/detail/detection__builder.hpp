// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_srv:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define CUSTOM_SRV__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_srv/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_srv
{

namespace msg
{

namespace builder
{

class Init_Detection_centroid
{
public:
  explicit Init_Detection_centroid(::custom_srv::msg::Detection & msg)
  : msg_(msg)
  {}
  ::custom_srv::msg::Detection centroid(::custom_srv::msg::Detection::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_srv::msg::Detection msg_;
};

class Init_Detection_confidence
{
public:
  explicit Init_Detection_confidence(::custom_srv::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_centroid confidence(::custom_srv::msg::Detection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Detection_centroid(msg_);
  }

private:
  ::custom_srv::msg::Detection msg_;
};

class Init_Detection_class_name
{
public:
  Init_Detection_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_confidence class_name(::custom_srv::msg::Detection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_Detection_confidence(msg_);
  }

private:
  ::custom_srv::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_srv::msg::Detection>()
{
  return custom_srv::msg::builder::Init_Detection_class_name();
}

}  // namespace custom_srv

#endif  // CUSTOM_SRV__MSG__DETAIL__DETECTION__BUILDER_HPP_
