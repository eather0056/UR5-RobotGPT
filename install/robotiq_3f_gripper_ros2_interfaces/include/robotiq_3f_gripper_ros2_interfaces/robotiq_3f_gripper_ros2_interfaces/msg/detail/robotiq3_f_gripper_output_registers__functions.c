// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperOutputRegisters.idl
// generated code does not contain a copyright notice
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__init(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * msg)
{
  if (!msg) {
    return false;
  }
  // r_act
  // r_mod
  // r_gto
  // r_atr
  // r_pra
  // r_spa
  // r_fra
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__fini(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * msg)
{
  if (!msg) {
    return;
  }
  // r_act
  // r_mod
  // r_gto
  // r_atr
  // r_pra
  // r_spa
  // r_fra
}

bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__are_equal(const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * lhs, const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // r_act
  if (lhs->r_act != rhs->r_act) {
    return false;
  }
  // r_mod
  if (lhs->r_mod != rhs->r_mod) {
    return false;
  }
  // r_gto
  if (lhs->r_gto != rhs->r_gto) {
    return false;
  }
  // r_atr
  if (lhs->r_atr != rhs->r_atr) {
    return false;
  }
  // r_pra
  if (lhs->r_pra != rhs->r_pra) {
    return false;
  }
  // r_spa
  if (lhs->r_spa != rhs->r_spa) {
    return false;
  }
  // r_fra
  if (lhs->r_fra != rhs->r_fra) {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__copy(
  const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * input,
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * output)
{
  if (!input || !output) {
    return false;
  }
  // r_act
  output->r_act = input->r_act;
  // r_mod
  output->r_mod = input->r_mod;
  // r_gto
  output->r_gto = input->r_gto;
  // r_atr
  output->r_atr = input->r_atr;
  // r_pra
  output->r_pra = input->r_pra;
  // r_spa
  output->r_spa = input->r_spa;
  // r_fra
  output->r_fra = input->r_fra;
  return true;
}

robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters *
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * msg = (robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters));
  bool success = robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__destroy(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence__init(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__fini(&data[i - 1]);
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
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence * array)
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
      robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__fini(&array->data[i]);
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

robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence *
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * data =
      (robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
