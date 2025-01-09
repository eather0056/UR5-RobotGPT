// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperOutputRegisters.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__STRUCT_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputRegisters_
{
  using Type = Robotiq3FGripperOutputRegisters_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputRegisters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r_act = 0;
      this->r_mod = 0;
      this->r_gto = 0;
      this->r_atr = 0;
      this->r_pra = 0;
      this->r_spa = 0;
      this->r_fra = 0;
    }
  }

  explicit Robotiq3FGripperOutputRegisters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r_act = 0;
      this->r_mod = 0;
      this->r_gto = 0;
      this->r_atr = 0;
      this->r_pra = 0;
      this->r_spa = 0;
      this->r_fra = 0;
    }
  }

  // field types and members
  using _r_act_type =
    uint8_t;
  _r_act_type r_act;
  using _r_mod_type =
    uint8_t;
  _r_mod_type r_mod;
  using _r_gto_type =
    uint8_t;
  _r_gto_type r_gto;
  using _r_atr_type =
    uint8_t;
  _r_atr_type r_atr;
  using _r_pra_type =
    uint8_t;
  _r_pra_type r_pra;
  using _r_spa_type =
    uint8_t;
  _r_spa_type r_spa;
  using _r_fra_type =
    uint8_t;
  _r_fra_type r_fra;

  // setters for named parameter idiom
  Type & set__r_act(
    const uint8_t & _arg)
  {
    this->r_act = _arg;
    return *this;
  }
  Type & set__r_mod(
    const uint8_t & _arg)
  {
    this->r_mod = _arg;
    return *this;
  }
  Type & set__r_gto(
    const uint8_t & _arg)
  {
    this->r_gto = _arg;
    return *this;
  }
  Type & set__r_atr(
    const uint8_t & _arg)
  {
    this->r_atr = _arg;
    return *this;
  }
  Type & set__r_pra(
    const uint8_t & _arg)
  {
    this->r_pra = _arg;
    return *this;
  }
  Type & set__r_spa(
    const uint8_t & _arg)
  {
    this->r_spa = _arg;
    return *this;
  }
  Type & set__r_fra(
    const uint8_t & _arg)
  {
    this->r_fra = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputRegisters_ & other) const
  {
    if (this->r_act != other.r_act) {
      return false;
    }
    if (this->r_mod != other.r_mod) {
      return false;
    }
    if (this->r_gto != other.r_gto) {
      return false;
    }
    if (this->r_atr != other.r_atr) {
      return false;
    }
    if (this->r_pra != other.r_pra) {
      return false;
    }
    if (this->r_spa != other.r_spa) {
      return false;
    }
    if (this->r_fra != other.r_fra) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputRegisters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputRegisters_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputRegisters =
  robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotiq_3f_gripper_ros2_interfaces

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__STRUCT_HPP_
