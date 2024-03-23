// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msgs:msg/XTraj.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__X_TRAJ__STRUCT_H_
#define COMMON_MSGS__MSG__DETAIL__X_TRAJ__STRUCT_H_

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

/// Struct defined in msg/XTraj in the package common_msgs.
typedef struct common_msgs__msg__XTraj
{
  rosidl_runtime_c__double__Sequence data;
} common_msgs__msg__XTraj;

// Struct for a sequence of common_msgs__msg__XTraj.
typedef struct common_msgs__msg__XTraj__Sequence
{
  common_msgs__msg__XTraj * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msgs__msg__XTraj__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSGS__MSG__DETAIL__X_TRAJ__STRUCT_H_
