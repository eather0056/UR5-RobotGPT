// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:action/Robotiq3FGripperOutputGoal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputGoal_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal(_init);
}

void Robotiq3FGripperOutputGoal_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal *>(message_memory);
  typed_message->~Robotiq3FGripperOutputGoal_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputGoal_Goal_message_member_array[1] = {
  {
    "output_registers_goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal, output_registers_goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputGoal_Goal_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // message namespace
  "Robotiq3FGripperOutputGoal_Goal",  // message name
  1,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal),
  Robotiq3FGripperOutputGoal_Goal_message_member_array,  // message members
  Robotiq3FGripperOutputGoal_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputGoal_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputGoal_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_Goal)() {
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputGoal_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result(_init);
}

void Robotiq3FGripperOutputGoal_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result *>(message_memory);
  typed_message->~Robotiq3FGripperOutputGoal_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputGoal_Result_message_member_array[1] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputGoal_Result_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // message namespace
  "Robotiq3FGripperOutputGoal_Result",  // message name
  1,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result),
  Robotiq3FGripperOutputGoal_Result_message_member_array,  // message members
  Robotiq3FGripperOutputGoal_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputGoal_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputGoal_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_Result)() {
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputGoal_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback(_init);
}

void Robotiq3FGripperOutputGoal_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback *>(message_memory);
  typed_message->~Robotiq3FGripperOutputGoal_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputGoal_Feedback_message_member_array[2] = {
  {
    "input_registers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback, input_registers),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "output_registers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback, output_registers),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputGoal_Feedback_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // message namespace
  "Robotiq3FGripperOutputGoal_Feedback",  // message name
  2,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback),
  Robotiq3FGripperOutputGoal_Feedback_message_member_array,  // message members
  Robotiq3FGripperOutputGoal_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputGoal_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputGoal_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_Feedback)() {
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputGoal_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request(_init);
}

void Robotiq3FGripperOutputGoal_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request *>(message_memory);
  typed_message->~Robotiq3FGripperOutputGoal_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputGoal_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputGoal_SendGoal_Request_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // message namespace
  "Robotiq3FGripperOutputGoal_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request),
  Robotiq3FGripperOutputGoal_SendGoal_Request_message_member_array,  // message members
  Robotiq3FGripperOutputGoal_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputGoal_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputGoal_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_SendGoal_Request)() {
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputGoal_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response(_init);
}

void Robotiq3FGripperOutputGoal_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response *>(message_memory);
  typed_message->~Robotiq3FGripperOutputGoal_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputGoal_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputGoal_SendGoal_Response_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // message namespace
  "Robotiq3FGripperOutputGoal_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response),
  Robotiq3FGripperOutputGoal_SendGoal_Response_message_member_array,  // message members
  Robotiq3FGripperOutputGoal_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputGoal_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputGoal_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_SendGoal_Response)() {
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Robotiq3FGripperOutputGoal_SendGoal_service_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // service namespace
  "Robotiq3FGripperOutputGoal_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Robotiq3FGripperOutputGoal_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputGoal_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request(_init);
}

void Robotiq3FGripperOutputGoal_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request *>(message_memory);
  typed_message->~Robotiq3FGripperOutputGoal_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputGoal_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputGoal_GetResult_Request_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // message namespace
  "Robotiq3FGripperOutputGoal_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request),
  Robotiq3FGripperOutputGoal_GetResult_Request_message_member_array,  // message members
  Robotiq3FGripperOutputGoal_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputGoal_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputGoal_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_GetResult_Request)() {
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputGoal_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response(_init);
}

void Robotiq3FGripperOutputGoal_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response *>(message_memory);
  typed_message->~Robotiq3FGripperOutputGoal_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputGoal_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputGoal_GetResult_Response_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // message namespace
  "Robotiq3FGripperOutputGoal_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response),
  Robotiq3FGripperOutputGoal_GetResult_Response_message_member_array,  // message members
  Robotiq3FGripperOutputGoal_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputGoal_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputGoal_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_GetResult_Response)() {
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Robotiq3FGripperOutputGoal_GetResult_service_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // service namespace
  "Robotiq3FGripperOutputGoal_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Robotiq3FGripperOutputGoal_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void Robotiq3FGripperOutputGoal_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage(_init);
}

void Robotiq3FGripperOutputGoal_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage *>(message_memory);
  typed_message->~Robotiq3FGripperOutputGoal_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Robotiq3FGripperOutputGoal_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Robotiq3FGripperOutputGoal_FeedbackMessage_message_members = {
  "robotiq_3f_gripper_ros2_interfaces::action",  // message namespace
  "Robotiq3FGripperOutputGoal_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage),
  Robotiq3FGripperOutputGoal_FeedbackMessage_message_member_array,  // message members
  Robotiq3FGripperOutputGoal_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Robotiq3FGripperOutputGoal_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Robotiq3FGripperOutputGoal_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Robotiq3FGripperOutputGoal_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage>()
{
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_3f_gripper_ros2_interfaces, action, Robotiq3FGripperOutputGoal_FeedbackMessage)() {
  return &::robotiq_3f_gripper_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::Robotiq3FGripperOutputGoal_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
