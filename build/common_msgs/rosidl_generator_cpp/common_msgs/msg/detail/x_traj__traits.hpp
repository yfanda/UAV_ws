// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_msgs:msg/XTraj.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__X_TRAJ__TRAITS_HPP_
#define COMMON_MSGS__MSG__DETAIL__X_TRAJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "common_msgs/msg/detail/x_traj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const XTraj & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const XTraj & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const XTraj & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use common_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const common_msgs::msg::XTraj & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const common_msgs::msg::XTraj & msg)
{
  return common_msgs::msg::to_yaml(msg);
}

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
