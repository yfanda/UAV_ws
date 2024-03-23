// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msgs:msg/UTraj.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__U_TRAJ__STRUCT_H_
#define COMMON_MSGS__MSG__DETAIL__U_TRAJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UTraj in the package common_msgs.
typedef struct common_msgs__msg__UTraj
{
  rosidl_runtime_c__double__Sequence data;
} common_msgs__msg__UTraj;

// Struct for a sequence of common_msgs__msg__UTraj.
typedef struct common_msgs__msg__UTraj__Sequence
{
  common_msgs__msg__UTraj * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msgs__msg__UTraj__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSGS__MSG__DETAIL__U_TRAJ__STRUCT_H_
