// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define COMMON_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "common_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const State & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
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
  const State & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
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

inline std::string to_yaml(const State & msg, bool use_flow_style = false)
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
  const common_msgs::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const common_msgs::msg::State & msg)
{
  return common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<common_msgs::msg::State>()
{
  return "common_msgs::msg::State";
}

template<>
inline const char * name<common_msgs::msg::State>()
{
  return "common_msgs/msg/State";
}

template<>
struct has_fixed_size<common_msgs::msg::State>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<common_msgs::msg::State>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<common_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMON_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
