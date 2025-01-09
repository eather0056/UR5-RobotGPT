// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_srv:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define CUSTOM_SRV__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_srv__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__custom_srv__msg__Detection __declspec(deprecated)
#endif

namespace custom_srv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->confidence = 0.0f;
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc),
    centroid(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _centroid_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _centroid_type centroid;

  // setters for named parameter idiom
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__centroid(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_srv::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_srv::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_srv::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_srv::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_srv::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_srv::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_srv::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_srv::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_srv::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_srv::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_srv__msg__Detection
    std::shared_ptr<custom_srv::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_srv__msg__Detection
    std::shared_ptr<custom_srv::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->centroid != other.centroid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  custom_srv::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_srv

#endif  // CUSTOM_SRV__MSG__DETAIL__DETECTION__STRUCT_HPP_
