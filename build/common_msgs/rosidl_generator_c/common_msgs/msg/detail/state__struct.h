// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__STATE__STRUCT_H_
#define COMMON_MSGS__MSG__DETAIL__STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/State in the package common_msgs.
typedef struct common_msgs__msg__State
{
  double state[9];
} common_msgs__msg__State;

// Struct for a sequence of common_msgs__msg__State.
typedef struct common_msgs__msg__State__Sequence
{
  common_msgs__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msgs__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSGS__MSG__DETAIL__STATE__STRUCT_H_
