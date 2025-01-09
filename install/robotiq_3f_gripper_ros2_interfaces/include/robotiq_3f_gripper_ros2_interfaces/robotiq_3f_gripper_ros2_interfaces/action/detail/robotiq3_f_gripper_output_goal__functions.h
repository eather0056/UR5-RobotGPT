// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotiq_3f_gripper_ros2_interfaces:action/Robotiq3FGripperOutputGoal.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__FUNCTIONS_H_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robotiq_3f_gripper_ros2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.h"

/// Initialize action/Robotiq3FGripperOutputGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal
 * )) before or use
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * msg);

/// Finalize action/Robotiq3FGripperOutputGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * msg);

/// Create action/Robotiq3FGripperOutputGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__create();

/// Destroy action/Robotiq3FGripperOutputGoal message.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * msg);

/// Check for action/Robotiq3FGripperOutputGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * rhs);

/// Copy a action/Robotiq3FGripperOutputGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * output);

/// Initialize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * array, size_t size);

/// Finalize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * array);

/// Create array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__create(size_t size);

/// Destroy array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * array);

/// Check for action/Robotiq3FGripperOutputGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * rhs);

/// Copy an array of action/Robotiq3FGripperOutputGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * output);

/// Initialize action/Robotiq3FGripperOutputGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result
 * )) before or use
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * msg);

/// Finalize action/Robotiq3FGripperOutputGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * msg);

/// Create action/Robotiq3FGripperOutputGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__create();

/// Destroy action/Robotiq3FGripperOutputGoal message.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * msg);

/// Check for action/Robotiq3FGripperOutputGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * rhs);

/// Copy a action/Robotiq3FGripperOutputGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * output);

/// Initialize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * array, size_t size);

/// Finalize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * array);

/// Create array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__create(size_t size);

/// Destroy array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * array);

/// Check for action/Robotiq3FGripperOutputGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * rhs);

/// Copy an array of action/Robotiq3FGripperOutputGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * output);

/// Initialize action/Robotiq3FGripperOutputGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback
 * )) before or use
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * msg);

/// Finalize action/Robotiq3FGripperOutputGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * msg);

/// Create action/Robotiq3FGripperOutputGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__create();

/// Destroy action/Robotiq3FGripperOutputGoal message.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * msg);

/// Check for action/Robotiq3FGripperOutputGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * rhs);

/// Copy a action/Robotiq3FGripperOutputGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * output);

/// Initialize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * array);

/// Create array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * array);

/// Check for action/Robotiq3FGripperOutputGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * rhs);

/// Copy an array of action/Robotiq3FGripperOutputGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * output);

/// Initialize action/Robotiq3FGripperOutputGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request
 * )) before or use
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * msg);

/// Finalize action/Robotiq3FGripperOutputGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * msg);

/// Create action/Robotiq3FGripperOutputGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__create();

/// Destroy action/Robotiq3FGripperOutputGoal message.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * msg);

/// Check for action/Robotiq3FGripperOutputGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * rhs);

/// Copy a action/Robotiq3FGripperOutputGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * output);

/// Initialize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * array);

/// Create array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * array);

/// Check for action/Robotiq3FGripperOutputGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Robotiq3FGripperOutputGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * output);

/// Initialize action/Robotiq3FGripperOutputGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response
 * )) before or use
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * msg);

/// Finalize action/Robotiq3FGripperOutputGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * msg);

/// Create action/Robotiq3FGripperOutputGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__create();

/// Destroy action/Robotiq3FGripperOutputGoal message.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * msg);

/// Check for action/Robotiq3FGripperOutputGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * rhs);

/// Copy a action/Robotiq3FGripperOutputGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * output);

/// Initialize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * array);

/// Create array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * array);

/// Check for action/Robotiq3FGripperOutputGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Robotiq3FGripperOutputGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * output);

/// Initialize action/Robotiq3FGripperOutputGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request
 * )) before or use
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * msg);

/// Finalize action/Robotiq3FGripperOutputGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * msg);

/// Create action/Robotiq3FGripperOutputGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__create();

/// Destroy action/Robotiq3FGripperOutputGoal message.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * msg);

/// Check for action/Robotiq3FGripperOutputGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * rhs);

/// Copy a action/Robotiq3FGripperOutputGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * output);

/// Initialize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * array);

/// Create array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * array);

/// Check for action/Robotiq3FGripperOutputGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Robotiq3FGripperOutputGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * output);

/// Initialize action/Robotiq3FGripperOutputGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response
 * )) before or use
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * msg);

/// Finalize action/Robotiq3FGripperOutputGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * msg);

/// Create action/Robotiq3FGripperOutputGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__create();

/// Destroy action/Robotiq3FGripperOutputGoal message.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * msg);

/// Check for action/Robotiq3FGripperOutputGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * rhs);

/// Copy a action/Robotiq3FGripperOutputGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * output);

/// Initialize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * array);

/// Create array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * array);

/// Check for action/Robotiq3FGripperOutputGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Robotiq3FGripperOutputGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * output);

/// Initialize action/Robotiq3FGripperOutputGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage
 * )) before or use
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * msg);

/// Finalize action/Robotiq3FGripperOutputGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * msg);

/// Create action/Robotiq3FGripperOutputGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__create();

/// Destroy action/Robotiq3FGripperOutputGoal message.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * msg);

/// Check for action/Robotiq3FGripperOutputGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * rhs);

/// Copy a action/Robotiq3FGripperOutputGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * output);

/// Initialize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * array);

/// Create array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Robotiq3FGripperOutputGoal messages.
/**
 * It calls
 * robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * array);

/// Check for action/Robotiq3FGripperOutputGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Robotiq3FGripperOutputGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_gripper_ros2_interfaces
bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__FUNCTIONS_H_
