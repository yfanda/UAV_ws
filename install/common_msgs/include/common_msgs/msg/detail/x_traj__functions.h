// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from common_msgs:msg/XTraj.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__X_TRAJ__FUNCTIONS_H_
#define COMMON_MSGS__MSG__DETAIL__X_TRAJ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "common_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "common_msgs/msg/detail/x_traj__struct.h"

/// Initialize msg/XTraj message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * common_msgs__msg__XTraj
 * )) before or use
 * common_msgs__msg__XTraj__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
bool
common_msgs__msg__XTraj__init(common_msgs__msg__XTraj * msg);

/// Finalize msg/XTraj message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
void
common_msgs__msg__XTraj__fini(common_msgs__msg__XTraj * msg);

/// Create msg/XTraj message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * common_msgs__msg__XTraj__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
common_msgs__msg__XTraj *
common_msgs__msg__XTraj__create();

/// Destroy msg/XTraj message.
/**
 * It calls
 * common_msgs__msg__XTraj__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
void
common_msgs__msg__XTraj__destroy(common_msgs__msg__XTraj * msg);

/// Check for msg/XTraj message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
bool
common_msgs__msg__XTraj__are_equal(const common_msgs__msg__XTraj * lhs, const common_msgs__msg__XTraj * rhs);

/// Copy a msg/XTraj message.
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
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
bool
common_msgs__msg__XTraj__copy(
  const common_msgs__msg__XTraj * input,
  common_msgs__msg__XTraj * output);

/// Initialize array of msg/XTraj messages.
/**
 * It allocates the memory for the number of elements and calls
 * common_msgs__msg__XTraj__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
bool
common_msgs__msg__XTraj__Sequence__init(common_msgs__msg__XTraj__Sequence * array, size_t size);

/// Finalize array of msg/XTraj messages.
/**
 * It calls
 * common_msgs__msg__XTraj__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
void
common_msgs__msg__XTraj__Sequence__fini(common_msgs__msg__XTraj__Sequence * array);

/// Create array of msg/XTraj messages.
/**
 * It allocates the memory for the array and calls
 * common_msgs__msg__XTraj__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
common_msgs__msg__XTraj__Sequence *
common_msgs__msg__XTraj__Sequence__create(size_t size);

/// Destroy array of msg/XTraj messages.
/**
 * It calls
 * common_msgs__msg__XTraj__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
void
common_msgs__msg__XTraj__Sequence__destroy(common_msgs__msg__XTraj__Sequence * array);

/// Check for msg/XTraj message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
bool
common_msgs__msg__XTraj__Sequence__are_equal(const common_msgs__msg__XTraj__Sequence * lhs, const common_msgs__msg__XTraj__Sequence * rhs);

/// Copy an array of msg/XTraj messages.
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
ROSIDL_GENERATOR_C_PUBLIC_common_msgs
bool
common_msgs__msg__XTraj__Sequence__copy(
  const common_msgs__msg__XTraj__Sequence * input,
  common_msgs__msg__XTraj__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSGS__MSG__DETAIL__X_TRAJ__FUNCTIONS_H_