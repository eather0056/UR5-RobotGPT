// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_srv:msg/Detections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_srv/msg/detail/detections__rosidl_typesupport_introspection_c.h"
#include "custom_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_srv/msg/detail/detections__functions.h"
#include "custom_srv/msg/detail/detections__struct.h"


// Include directives for member types
// Member `detections`
#include "custom_srv/msg/detection.h"
// Member `detections`
#include "custom_srv/msg/detail/detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_srv__msg__Detections__init(message_memory);
}

void custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_fini_function(void * message_memory)
{
  custom_srv__msg__Detections__fini(message_memory);
}

size_t custom_srv__msg__Detections__rosidl_typesupport_introspection_c__size_function__Detections__detections(
  const void * untyped_member)
{
  const custom_srv__msg__Detection__Sequence * member =
    (const custom_srv__msg__Detection__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_srv__msg__Detections__rosidl_typesupport_introspection_c__get_const_function__Detections__detections(
  const void * untyped_member, size_t index)
{
  const custom_srv__msg__Detection__Sequence * member =
    (const custom_srv__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_srv__msg__Detections__rosidl_typesupport_introspection_c__get_function__Detections__detections(
  void * untyped_member, size_t index)
{
  custom_srv__msg__Detection__Sequence * member =
    (custom_srv__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_srv__msg__Detections__rosidl_typesupport_introspection_c__fetch_function__Detections__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_srv__msg__Detection * item =
    ((const custom_srv__msg__Detection *)
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__get_const_function__Detections__detections(untyped_member, index));
  custom_srv__msg__Detection * value =
    (custom_srv__msg__Detection *)(untyped_value);
  *value = *item;
}

void custom_srv__msg__Detections__rosidl_typesupport_introspection_c__assign_function__Detections__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_srv__msg__Detection * item =
    ((custom_srv__msg__Detection *)
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__get_function__Detections__detections(untyped_member, index));
  const custom_srv__msg__Detection * value =
    (const custom_srv__msg__Detection *)(untyped_value);
  *item = *value;
}

bool custom_srv__msg__Detections__rosidl_typesupport_introspection_c__resize_function__Detections__detections(
  void * untyped_member, size_t size)
{
  custom_srv__msg__Detection__Sequence * member =
    (custom_srv__msg__Detection__Sequence *)(untyped_member);
  custom_srv__msg__Detection__Sequence__fini(member);
  return custom_srv__msg__Detection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_member_array[1] = {
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_srv__msg__Detections, detections),  // bytes offset in struct
    NULL,  // default value
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__size_function__Detections__detections,  // size() function pointer
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__get_const_function__Detections__detections,  // get_const(index) function pointer
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__get_function__Detections__detections,  // get(index) function pointer
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__fetch_function__Detections__detections,  // fetch(index, &value) function pointer
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__assign_function__Detections__detections,  // assign(index, value) function pointer
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__resize_function__Detections__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_members = {
  "custom_srv__msg",  // message namespace
  "Detections",  // message name
  1,  // number of fields
  sizeof(custom_srv__msg__Detections),
  custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_member_array,  // message members
  custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_type_support_handle = {
  0,
  &custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_srv, msg, Detections)() {
  custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_srv, msg, Detection)();
  if (!custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_type_support_handle.typesupport_identifier) {
    custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_srv__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
