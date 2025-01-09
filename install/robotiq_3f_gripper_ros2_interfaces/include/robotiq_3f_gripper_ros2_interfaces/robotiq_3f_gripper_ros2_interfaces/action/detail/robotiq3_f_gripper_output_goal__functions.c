// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotiq_3f_gripper_ros2_interfaces:action/Robotiq3FGripperOutputGoal.idl
// generated code does not contain a copyright notice
#include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `output_registers_goal`
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__functions.h"

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // output_registers_goal
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__init(&msg->output_registers_goal)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * msg)
{
  if (!msg) {
    return;
  }
  // output_registers_goal
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__fini(&msg->output_registers_goal);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output_registers_goal
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__are_equal(
      &(lhs->output_registers_goal), &(rhs->output_registers_goal)))
  {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // output_registers_goal
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__copy(
      &(input->output_registers_goal), &(output->output_registers_goal)))
  {
    return false;
  }
  return true;
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * msg = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal));
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * data =
      (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * msg = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result));
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * data =
      (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `input_registers`
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_input_registers__functions.h"
// Member `output_registers`
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__functions.h"

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // input_registers
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__init(&msg->input_registers)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(msg);
    return false;
  }
  // output_registers
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__init(&msg->output_registers)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // input_registers
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__fini(&msg->input_registers);
  // output_registers
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__fini(&msg->output_registers);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input_registers
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__are_equal(
      &(lhs->input_registers), &(rhs->input_registers)))
  {
    return false;
  }
  // output_registers
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__are_equal(
      &(lhs->output_registers), &(rhs->output_registers)))
  {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // input_registers
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__copy(
      &(input->input_registers), &(output->input_registers)))
  {
    return false;
  }
  // output_registers
  if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__copy(
      &(input->output_registers), &(output->output_registers)))
  {
    return false;
  }
  return true;
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * msg = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback));
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * data =
      (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__functions.h"

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__init(&msg->goal)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__fini(&msg->goal);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * msg = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request));
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * data =
      (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * msg = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response));
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * data =
      (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * msg = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request));
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * data =
      (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__functions.h"

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__init(&msg->result)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__fini(&msg->result);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * msg = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response));
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * data =
      (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__functions.h"

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__init(&msg->feedback)) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__fini(&msg->feedback);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * msg = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage));
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__init(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence *
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * data =
      (robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
