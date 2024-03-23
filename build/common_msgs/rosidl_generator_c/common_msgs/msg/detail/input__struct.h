// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msgs:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__INPUT__STRUCT_H_
#define COMMON_MSGS__MSG__DETAIL__INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Input in the package common_msgs.
typedef struct common_msgs__msg__Input
{
  double input[8];
} common_msgs__msg__Input;

// Struct for a sequence of common_msgs__msg__Input.
typedef struct common_msgs__msg__Input__Sequence
{
  common_msgs__msg__Input * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msgs__msg__Input__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSGS__MSG__DETAIL__INPUT__STRUCT_H_
