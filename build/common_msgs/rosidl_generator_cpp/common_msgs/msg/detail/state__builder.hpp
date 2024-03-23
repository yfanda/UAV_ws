// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
#define COMMON_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "common_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace common_msgs
{

namespace msg
{

namespace builder
{

class Init_State_state
{
public:
  Init_State_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_msgs::msg::State state(::common_msgs::msg::State::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msgs::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msgs::msg::State>()
{
  return common_msgs::msg::builder::Init_State_state();
}

}  // namespace common_msgs

#endif  // COMMON_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
