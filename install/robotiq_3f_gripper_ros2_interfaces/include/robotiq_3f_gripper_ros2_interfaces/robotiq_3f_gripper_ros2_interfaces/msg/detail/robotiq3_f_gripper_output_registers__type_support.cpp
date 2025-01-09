// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperOutputRegisters.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputRegisters_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters(_init);
}

void Robotiq3FGripperOutputRegisters_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters *>(message_memory);
  typed_message->~Robotiq3FGripperOutputRegisters();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputRegisters_message_member_array[7] = {
  {
    "r_act",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters, r_act),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_mod",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters, r_mod),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_gto",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters, r_gto),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_atr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters, r_atr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_pra",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters, r_pra),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_spa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters, r_spa),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_fra",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters, r_fra),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputRegisters_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::msg",  // message namespace
  "Robotiq3FGripperOutputRegisters",  // message name
  7,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters),
  Robotiq3FGripperOutputRegisters_message_member_array,  // message members
  Robotiq3FGripperOutputRegisters_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputRegisters_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputRegisters_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputRegisters_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::msg::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputRegisters_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, msg, Robotiq3FGripperOutputRegisters)() {
  return &::robotiq_3f_gripper_ros2_interfaces::msg::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputRegisters_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
