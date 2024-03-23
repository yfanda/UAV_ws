// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from common_msgs:msg/XTraj.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "common_msgs/msg/detail/x_traj__struct.hpp"
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

void XTraj_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) common_msgs::msg::XTraj(_init);
}

void XTraj_fini_function(void * message_memory)
{
  auto typed_message = static_cast<common_msgs::msg::XTraj *>(message_memory);
  typed_message->~XTraj();
}

size_t size_function__XTraj__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__XTraj__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__XTraj__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__XTraj__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember XTraj_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msgs::msg::XTraj, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__XTraj__data,  // size() function pointer
    get_const_function__XTraj__data,  // get_const(index) function pointer
    get_function__XTraj__data,  // get(index) function pointer
    resize_function__XTraj__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers XTraj_message_members = {
  "common_msgs::msg",  // message namespace
  "XTraj",  // message name
  1,  // number of fields
  sizeof(common_msgs::msg::XTraj),
  XTraj_message_member_array,  // message members
  XTraj_init_function,  // function to initialize message memory (memory has to be allocated)
  XTraj_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t XTraj_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &XTraj_message_members,
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
get_message_type_support_handle<common_msgs::msg::XTraj>()
{
  return &::common_msgs::msg::rosidl_typesupport_introspection_cpp::XTraj_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, common_msgs, msg, XTraj)() {
  return &::common_msgs::msg::rosidl_typesupport_introspection_cpp::XTraj_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
