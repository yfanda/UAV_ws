// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_msgs:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__INPUT__TRAITS_HPP_
#define COMMON_MSGS__MSG__DETAIL__INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "common_msgs/msg/detail/input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Input & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    if (msg.input.size() == 0) {
      out << "input: []";
    } else {
      out << "input: [";
      size_t pending_items = msg.input.size();
      for (auto item : msg.input) {
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
  const Input & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input.size() == 0) {
      out << "input: []\n";
    } else {
      out << "input:\n";
      for (auto item : msg.input) {
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

inline std::string to_yaml(const Input & msg, bool use_flow_style = false)
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
  const common_msgs::msg::Input & msg,
  std::ostream & out, size_t indentation = 0)
{
  common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const common_msgs::msg::Input & msg)
{
  return common_msgs::msg::to_yaml(msg);
}

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
