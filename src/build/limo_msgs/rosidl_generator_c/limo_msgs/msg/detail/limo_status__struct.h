// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limo_msgs:msg/LimoStatus.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__STRUCT_H_
#define LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/LimoStatus in the package limo_msgs.
typedef struct limo_msgs__msg__LimoStatus
{
  std_msgs__msg__Header header;
  uint8_t vehicle_state;
  uint8_t control_mode;
  double battery_voltage;
  uint16_t error_code;
  uint8_t motion_mode;
} limo_msgs__msg__LimoStatus;

// Struct for a sequence of limo_msgs__msg__LimoStatus.
typedef struct limo_msgs__msg__LimoStatus__Sequence
{
  limo_msgs__msg__LimoStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__msg__LimoStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__STRUCT_H_
