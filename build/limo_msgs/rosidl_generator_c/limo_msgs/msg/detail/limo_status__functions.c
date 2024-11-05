// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limo_msgs:msg/LimoStatus.idl
// generated code does not contain a copyright notice
#include "limo_msgs/msg/detail/limo_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
limo_msgs__msg__LimoStatus__init(limo_msgs__msg__LimoStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    limo_msgs__msg__LimoStatus__fini(msg);
    return false;
  }
  // vehicle_state
  // control_mode
  // battery_voltage
  // error_code
  // motion_mode
  return true;
}

void
limo_msgs__msg__LimoStatus__fini(limo_msgs__msg__LimoStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicle_state
  // control_mode
  // battery_voltage
  // error_code
  // motion_mode
}

bool
limo_msgs__msg__LimoStatus__are_equal(const limo_msgs__msg__LimoStatus * lhs, const limo_msgs__msg__LimoStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vehicle_state
  if (lhs->vehicle_state != rhs->vehicle_state) {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // motion_mode
  if (lhs->motion_mode != rhs->motion_mode) {
    return false;
  }
  return true;
}

bool
limo_msgs__msg__LimoStatus__copy(
  const limo_msgs__msg__LimoStatus * input,
  limo_msgs__msg__LimoStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vehicle_state
  output->vehicle_state = input->vehicle_state;
  // control_mode
  output->control_mode = input->control_mode;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // error_code
  output->error_code = input->error_code;
  // motion_mode
  output->motion_mode = input->motion_mode;
  return true;
}

limo_msgs__msg__LimoStatus *
limo_msgs__msg__LimoStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__msg__LimoStatus * msg = (limo_msgs__msg__LimoStatus *)allocator.allocate(sizeof(limo_msgs__msg__LimoStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__msg__LimoStatus));
  bool success = limo_msgs__msg__LimoStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__msg__LimoStatus__destroy(limo_msgs__msg__LimoStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__msg__LimoStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__msg__LimoStatus__Sequence__init(limo_msgs__msg__LimoStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__msg__LimoStatus * data = NULL;

  if (size) {
    data = (limo_msgs__msg__LimoStatus *)allocator.zero_allocate(size, sizeof(limo_msgs__msg__LimoStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__msg__LimoStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__msg__LimoStatus__fini(&data[i - 1]);
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
limo_msgs__msg__LimoStatus__Sequence__fini(limo_msgs__msg__LimoStatus__Sequence * array)
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
      limo_msgs__msg__LimoStatus__fini(&array->data[i]);
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

limo_msgs__msg__LimoStatus__Sequence *
limo_msgs__msg__LimoStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__msg__LimoStatus__Sequence * array = (limo_msgs__msg__LimoStatus__Sequence *)allocator.allocate(sizeof(limo_msgs__msg__LimoStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__msg__LimoStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__msg__LimoStatus__Sequence__destroy(limo_msgs__msg__LimoStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__msg__LimoStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__msg__LimoStatus__Sequence__are_equal(const limo_msgs__msg__LimoStatus__Sequence * lhs, const limo_msgs__msg__LimoStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__msg__LimoStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__msg__LimoStatus__Sequence__copy(
  const limo_msgs__msg__LimoStatus__Sequence * input,
  limo_msgs__msg__LimoStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__msg__LimoStatus);
    limo_msgs__msg__LimoStatus * data =
      (limo_msgs__msg__LimoStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__msg__LimoStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          limo_msgs__msg__LimoStatus__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__msg__LimoStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
