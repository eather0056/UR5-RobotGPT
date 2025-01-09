// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_srv:srv/ProcessCoordinates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__STRUCT_H_
#define CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ProcessCoordinates in the package custom_srv.
typedef struct custom_srv__srv__ProcessCoordinates_Request
{
  int64_t x;
  int64_t y;
} custom_srv__srv__ProcessCoordinates_Request;

// Struct for a sequence of custom_srv__srv__ProcessCoordinates_Request.
typedef struct custom_srv__srv__ProcessCoordinates_Request__Sequence
{
  custom_srv__srv__ProcessCoordinates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_srv__srv__ProcessCoordinates_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ProcessCoordinates in the package custom_srv.
typedef struct custom_srv__srv__ProcessCoordinates_Response
{
  double depth;
} custom_srv__srv__ProcessCoordinates_Response;

// Struct for a sequence of custom_srv__srv__ProcessCoordinates_Response.
typedef struct custom_srv__srv__ProcessCoordinates_Response__Sequence
{
  custom_srv__srv__ProcessCoordinates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_srv__srv__ProcessCoordinates_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__STRUCT_H_
