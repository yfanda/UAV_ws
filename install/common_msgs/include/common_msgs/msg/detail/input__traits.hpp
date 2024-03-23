// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_msgs:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__INPUT__TRAITS_HPP_
#define COMMON_MSGS__MSG__DETAIL__INPUT__TRAITS_HPP_

#include "common_msgs/msg/detail/input__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_msgs::msg::Input>()
{
  return "common_msgs::msg::Input";
}

template<>
inline const char * name<common_msgs::msg::Input>()
{
  return "common_msgs/msg/Input";
}

template<>
struct has_fixed_size<common_msgs::msg::Input>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<common_msgs::msg::Input>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<common_msgs::msg::Input>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMON_MSGS__MSG__DETAIL__INPUT__TRAITS_HPP_
