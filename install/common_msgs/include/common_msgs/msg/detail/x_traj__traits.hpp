// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_msgs:msg/XTraj.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__X_TRAJ__TRAITS_HPP_
#define COMMON_MSGS__MSG__DETAIL__X_TRAJ__TRAITS_HPP_

#include "common_msgs/msg/detail/x_traj__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_msgs::msg::XTraj>()
{
  return "common_msgs::msg::XTraj";
}

template<>
inline const char * name<common_msgs::msg::XTraj>()
{
  return "common_msgs/msg/XTraj";
}

template<>
struct has_fixed_size<common_msgs::msg::XTraj>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<common_msgs::msg::XTraj>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<common_msgs::msg::XTraj>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMON_MSGS__MSG__DETAIL__X_TRAJ__TRAITS_HPP_
