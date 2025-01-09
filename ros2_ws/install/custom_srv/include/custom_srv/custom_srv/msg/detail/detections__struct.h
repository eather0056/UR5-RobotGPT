// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_srv:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__MSG__DETAIL__DETECTIONS__STRUCT_H_
#define CUSTOM_SRV__MSG__DETAIL__DETECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'detections'
#include "custom_srv/msg/detail/detection__struct.h"

/// Struct defined in msg/Detections in the package custom_srv.
typedef struct custom_srv__msg__Detections
{
  custom_srv__msg__Detection__Sequence detections;
} custom_srv__msg__Detections;

// Struct for a sequence of custom_srv__msg__Detections.
typedef struct custom_srv__msg__Detections__Sequence
{
  custom_srv__msg__Detections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_srv__msg__Detections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_SRV__MSG__DETAIL__DETECTIONS__STRUCT_H_
