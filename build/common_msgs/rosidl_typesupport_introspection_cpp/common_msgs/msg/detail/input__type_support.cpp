// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from common_msgs:msg/Input.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "common_msgs/msg/detail/input__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace common_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Input_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) common_msgs::msg::Input(_init);
}

void Input_fini_function(void * message_memory)
{
  auto typed_message = static_cast<common_msgs::msg::Input *>(message_memory);
  typed_message->~Input();
}

size_t size_function__Input__input(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__Input__input(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__Input__input(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__Input__input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Input__input(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Input__input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Input__input(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Input_message_member_array[1] = {
  {
    "input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(common_msgs::msg::Input, input),  // bytes offset in struct
    nullptr,  // default value
    size_function__Input__input,  // size() function pointer
    get_const_function__Input__input,  // get_const(index) function pointer
    get_function__Input__input,  // get(index) function pointer
    fetch_function__Input__input,  // fetch(index, &value) function pointer
    assign_function__Input__input,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Input_message_members = {
  "common_msgs::msg",  // message namespace
  "Input",  // message name
  1,  // number of fields
  sizeof(common_msgs::msg::Input),
  Input_message_member_array,  // message members
  Input_init_function,  // function to initialize message memory (memory has to be allocated)
  Input_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Input_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Input_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<common_msgs::msg::Input>()
{
  return &::common_msgs::msg::rosidl_typesupport_introspection_cpp::Input_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, common_msgs, msg, Input)() {
  return &::common_msgs::msg::rosidl_typesupport_introspection_cpp::Input_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
