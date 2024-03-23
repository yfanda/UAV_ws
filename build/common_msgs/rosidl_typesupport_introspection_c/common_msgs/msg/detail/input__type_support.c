// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from common_msgs:msg/Input.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "common_msgs/msg/detail/input__rosidl_typesupport_introspection_c.h"
#include "common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "common_msgs/msg/detail/input__functions.h"
#include "common_msgs/msg/detail/input__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  common_msgs__msg__Input__init(message_memory);
}

void common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_fini_function(void * message_memory)
{
  common_msgs__msg__Input__fini(message_memory);
}

size_t common_msgs__msg__Input__rosidl_typesupport_introspection_c__size_function__Input__input(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * common_msgs__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__input(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * common_msgs__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__input(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void common_msgs__msg__Input__rosidl_typesupport_introspection_c__fetch_function__Input__input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    common_msgs__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__input(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void common_msgs__msg__Input__rosidl_typesupport_introspection_c__assign_function__Input__input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    common_msgs__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__input(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_message_member_array[1] = {
  {
    "input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(common_msgs__msg__Input, input),  // bytes offset in struct
    NULL,  // default value
    common_msgs__msg__Input__rosidl_typesupport_introspection_c__size_function__Input__input,  // size() function pointer
    common_msgs__msg__Input__rosidl_typesupport_introspection_c__get_const_function__Input__input,  // get_const(index) function pointer
    common_msgs__msg__Input__rosidl_typesupport_introspection_c__get_function__Input__input,  // get(index) function pointer
    common_msgs__msg__Input__rosidl_typesupport_introspection_c__fetch_function__Input__input,  // fetch(index, &value) function pointer
    common_msgs__msg__Input__rosidl_typesupport_introspection_c__assign_function__Input__input,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_message_members = {
  "common_msgs__msg",  // message namespace
  "Input",  // message name
  1,  // number of fields
  sizeof(common_msgs__msg__Input),
  common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_message_member_array,  // message members
  common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_init_function,  // function to initialize message memory (memory has to be allocated)
  common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_message_type_support_handle = {
  0,
  &common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msgs, msg, Input)() {
  if (!common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_message_type_support_handle.typesupport_identifier) {
    common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &common_msgs__msg__Input__rosidl_typesupport_introspection_c__Input_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
