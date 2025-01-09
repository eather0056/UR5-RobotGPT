// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperInputRegisters.idl
// generated code does not contain a copyright notice
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_input_registers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__init(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * msg)
{
  if (!msg) {
    return false;
  }
  // g_act
  // g_mod
  // g_gto
  // g_imc
  // g_sta
  // g_flt
  // g_pra
  return true;
}

void
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__fini(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * msg)
{
  if (!msg) {
    return;
  }
  // g_act
  // g_mod
  // g_gto
  // g_imc
  // g_sta
  // g_flt
  // g_pra
}

bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__are_equal(const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * lhs, const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // g_act
  if (lhs->g_act != rhs->g_act) {
    return false;
  }
  // g_mod
  if (lhs->g_mod != rhs->g_mod) {
    return false;
  }
  // g_gto
  if (lhs->g_gto != rhs->g_gto) {
    return false;
  }
  // g_imc
  if (lhs->g_imc != rhs->g_imc) {
    return false;
  }
  // g_sta
  if (lhs->g_sta != rhs->g_sta) {
    return false;
  }
  // g_flt
  if (lhs->g_flt != rhs->g_flt) {
    return false;
  }
  // g_pra
  if (lhs->g_pra != rhs->g_pra) {
    return false;
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__copy(
  const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * input,
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * output)
{
  if (!input || !output) {
    return false;
  }
  // g_act
  output->g_act = input->g_act;
  // g_mod
  output->g_mod = input->g_mod;
  // g_gto
  output->g_gto = input->g_gto;
  // g_imc
  output->g_imc = input->g_imc;
  // g_sta
  output->g_sta = input->g_sta;
  // g_flt
  output->g_flt = input->g_flt;
  // g_pra
  output->g_pra = input->g_pra;
  return true;
}

robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters *
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * msg = (robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters));
  bool success = robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__destroy(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence__init(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * data = NULL;

  if (size) {
    data = (robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters *)allocator.zero_allocate(size, sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__fini(&data[i - 1]);
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
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence__fini(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence * array)
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
      robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__fini(&array->data[i]);
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

robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence *
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence * array = (robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence *)allocator.allocate(sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence__destroy(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence__are_equal(const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence * lhs, const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence__copy(
  const robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence * input,
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters * data =
      (robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
