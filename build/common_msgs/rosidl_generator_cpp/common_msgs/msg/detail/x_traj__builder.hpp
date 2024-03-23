// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msgs:msg/XTraj.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__X_TRAJ__BUILDER_HPP_
#define COMMON_MSGS__MSG__DETAIL__X_TRAJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "common_msgs/msg/detail/x_traj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace common_msgs
{

namespace msg
{

namespace builder
{

class Init_XTraj_data
{
public:
  Init_XTraj_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_msgs::msg::XTraj data(::common_msgs::msg::XTraj::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msgs::msg::XTraj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msgs::msg::XTraj>()
{
  return common_msgs::msg::builder::Init_XTraj_data();
}

}  // namespace common_msgs

#endif  // COMMON_MSGS__MSG__DETAIL__X_TRAJ__BUILDER_HPP_
