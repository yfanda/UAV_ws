// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msgs:msg/UTraj.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__U_TRAJ__STRUCT_HPP_
#define COMMON_MSGS__MSG__DETAIL__U_TRAJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__common_msgs__msg__UTraj __attribute__((deprecated))
#else
# define DEPRECATED__common_msgs__msg__UTraj __declspec(deprecated)
#endif

namespace common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UTraj_
{
  using Type = UTraj_<ContainerAllocator>;

  explicit UTraj_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit UTraj_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msgs::msg::UTraj_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msgs::msg::UTraj_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msgs::msg::UTraj_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msgs::msg::UTraj_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msgs::msg::UTraj_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msgs::msg::UTraj_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msgs::msg::UTraj_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msgs::msg::UTraj_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msgs::msg::UTraj_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msgs::msg::UTraj_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msgs__msg__UTraj
    std::shared_ptr<common_msgs::msg::UTraj_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msgs__msg__UTraj
    std::shared_ptr<common_msgs::msg::UTraj_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UTraj_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const UTraj_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UTraj_

// alias to use template instance with default allocator
using UTraj =
  common_msgs::msg::UTraj_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msgs

#endif  // COMMON_MSGS__MSG__DETAIL__U_TRAJ__STRUCT_HPP_
