// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msgs:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__INPUT__BUILDER_HPP_
#define COMMON_MSGS__MSG__DETAIL__INPUT__BUILDER_HPP_

#include "common_msgs/msg/detail/input__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msgs
{

namespace msg
{

namespace builder
{

class Init_Input_input
{
public:
  Init_Input_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_msgs::msg::Input input(::common_msgs::msg::Input::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msgs::msg::Input msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msgs::msg::Input>()
{
  return common_msgs::msg::builder::Init_Input_input();
}

}  // namespace common_msgs

#endif  // COMMON_MSGS__MSG__DETAIL__INPUT__BUILDER_HPP_
