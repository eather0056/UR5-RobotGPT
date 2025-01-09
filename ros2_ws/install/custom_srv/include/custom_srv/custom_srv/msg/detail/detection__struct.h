// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_srv:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__MSG__DETAIL__DETECTION__STRUCT_H_
#define CUSTOM_SRV__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Detection in the package custom_srv.
typedef struct custom_srv__msg__Detection
{
  rosidl_runtime_c__String class_name;
  float confidence;
  geometry_msgs__msg__Point centroid;
} custom_srv__msg__Detection;

// Struct for a sequence of custom_srv__msg__Detection.
typedef struct custom_srv__msg__Detection__Sequence
{
  custom_srv__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_srv__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_SRV__MSG__DETAIL__DETECTION__STRUCT_H_
