// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from limo_msgs:msg/LimoStatus.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__FUNCTIONS_H_
#define LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "limo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "limo_msgs/msg/detail/limo_status__struct.h"

/// Initialize msg/LimoStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__msg__LimoStatus
 * )) before or use
 * limo_msgs__msg__LimoStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__msg__LimoStatus__init(limo_msgs__msg__LimoStatus * msg);

/// Finalize msg/LimoStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__msg__LimoStatus__fini(limo_msgs__msg__LimoStatus * msg);

/// Create msg/LimoStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__msg__LimoStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__msg__LimoStatus *
limo_msgs__msg__LimoStatus__create();

/// Destroy msg/LimoStatus message.
/**
 * It calls
 * limo_msgs__msg__LimoStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__msg__LimoStatus__destroy(limo_msgs__msg__LimoStatus * msg);

/// Check for msg/LimoStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__msg__LimoStatus__are_equal(const limo_msgs__msg__LimoStatus * lhs, const limo_msgs__msg__LimoStatus * rhs);

/// Copy a msg/LimoStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__msg__LimoStatus__copy(
  const limo_msgs__msg__LimoStatus * input,
  limo_msgs__msg__LimoStatus * output);

/// Initialize array of msg/LimoStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__msg__LimoStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__msg__LimoStatus__Sequence__init(limo_msgs__msg__LimoStatus__Sequence * array, size_t size);

/// Finalize array of msg/LimoStatus messages.
/**
 * It calls
 * limo_msgs__msg__LimoStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__msg__LimoStatus__Sequence__fini(limo_msgs__msg__LimoStatus__Sequence * array);

/// Create array of msg/LimoStatus messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__msg__LimoStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__msg__LimoStatus__Sequence *
limo_msgs__msg__LimoStatus__Sequence__create(size_t size);

/// Destroy array of msg/LimoStatus messages.
/**
 * It calls
 * limo_msgs__msg__LimoStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__msg__LimoStatus__Sequence__destroy(limo_msgs__msg__LimoStatus__Sequence * array);

/// Check for msg/LimoStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__msg__LimoStatus__Sequence__are_equal(const limo_msgs__msg__LimoStatus__Sequence * lhs, const limo_msgs__msg__LimoStatus__Sequence * rhs);

/// Copy an array of msg/LimoStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__msg__LimoStatus__Sequence__copy(
  const limo_msgs__msg__LimoStatus__Sequence * input,
  limo_msgs__msg__LimoStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__FUNCTIONS_H_
