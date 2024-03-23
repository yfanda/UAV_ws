// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msgs:msg/UTraj.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__U_TRAJ__BUILDER_HPP_
#define COMMON_MSGS__MSG__DETAIL__U_TRAJ__BUILDER_HPP_

#include "common_msgs/msg/detail/u_traj__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msgs
{

namespace msg
{

namespace builder
{

class Init_UTraj_data
{
public:
  Init_UTraj_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_msgs::msg::UTraj data(::common_msgs::msg::UTraj::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msgs::msg::UTraj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msgs::msg::UTraj>()
{
  return common_msgs::msg::builder::Init_UTraj_data();
}

}  // namespace common_msgs

#endif  // COMMON_MSGS__MSG__DETAIL__U_TRAJ__BUILDER_HPP_
