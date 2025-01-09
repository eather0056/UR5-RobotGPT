// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperInputRegisters.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__STRUCT_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperInputRegisters_
{
  using Type = Robotiq3FGripperInputRegisters_<ContainerAllocator>;

  explicit Robotiq3FGripperInputRegisters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->g_act = 0;
      this->g_mod = 0;
      this->g_gto = 0;
      this->g_imc = 0;
      this->g_sta = 0;
      this->g_flt = 0;
      this->g_pra = 0;
    }
  }

  explicit Robotiq3FGripperInputRegisters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->g_act = 0;
      this->g_mod = 0;
      this->g_gto = 0;
      this->g_imc = 0;
      this->g_sta = 0;
      this->g_flt = 0;
      this->g_pra = 0;
    }
  }

  // field types and members
  using _g_act_type =
    uint8_t;
  _g_act_type g_act;
  using _g_mod_type =
    uint8_t;
  _g_mod_type g_mod;
  using _g_gto_type =
    uint8_t;
  _g_gto_type g_gto;
  using _g_imc_type =
    uint8_t;
  _g_imc_type g_imc;
  using _g_sta_type =
    uint8_t;
  _g_sta_type g_sta;
  using _g_flt_type =
    uint8_t;
  _g_flt_type g_flt;
  using _g_pra_type =
    uint8_t;
  _g_pra_type g_pra;

  // setters for named parameter idiom
  Type & set__g_act(
    const uint8_t & _arg)
  {
    this->g_act = _arg;
    return *this;
  }
  Type & set__g_mod(
    const uint8_t & _arg)
  {
    this->g_mod = _arg;
    return *this;
  }
  Type & set__g_gto(
    const uint8_t & _arg)
  {
    this->g_gto = _arg;
    return *this;
  }
  Type & set__g_imc(
    const uint8_t & _arg)
  {
    this->g_imc = _arg;
    return *this;
  }
  Type & set__g_sta(
    const uint8_t & _arg)
  {
    this->g_sta = _arg;
    return *this;
  }
  Type & set__g_flt(
    const uint8_t & _arg)
  {
    this->g_flt = _arg;
    return *this;
  }
  Type & set__g_pra(
    const uint8_t & _arg)
  {
    this->g_pra = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperInputRegisters_ & other) const
  {
    if (this->g_act != other.g_act) {
      return false;
    }
    if (this->g_mod != other.g_mod) {
      return false;
    }
    if (this->g_gto != other.g_gto) {
      return false;
    }
    if (this->g_imc != other.g_imc) {
      return false;
    }
    if (this->g_sta != other.g_sta) {
      return false;
    }
    if (this->g_flt != other.g_flt) {
      return false;
    }
    if (this->g_pra != other.g_pra) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperInputRegisters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperInputRegisters_

// alias to use template instance with default allocator
using Robotiq3FGripperInputRegisters =
  robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotiq_3f_gripper_ros2_interfaces

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_INPUT_REGISTERS__STRUCT_HPP_
