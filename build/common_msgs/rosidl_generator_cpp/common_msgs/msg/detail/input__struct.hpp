// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msgs:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSGS__MSG__DETAIL__INPUT__STRUCT_HPP_
#define COMMON_MSGS__MSG__DETAIL__INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__common_msgs__msg__Input __attribute__((deprecated))
#else
# define DEPRECATED__common_msgs__msg__Input __declspec(deprecated)
#endif

namespace common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Input_
{
  using Type = Input_<ContainerAllocator>;

  explicit Input_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 8>::iterator, double>(this->input.begin(), this->input.end(), 0.0);
    }
  }

  explicit Input_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 8>::iterator, double>(this->input.begin(), this->input.end(), 0.0);
    }
  }

  // field types and members
  using _input_type =
    std::array<double, 8>;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const std::array<double, 8> & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msgs::msg::Input_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msgs::msg::Input_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msgs::msg::Input_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msgs::msg::Input_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msgs::msg::Input_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msgs::msg::Input_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msgs::msg::Input_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msgs::msg::Input_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msgs::msg::Input_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msgs::msg::Input_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msgs__msg__Input
    std::shared_ptr<common_msgs::msg::Input_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msgs__msg__Input
    std::shared_ptr<common_msgs::msg::Input_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Input_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const Input_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Input_

// alias to use template instance with default allocator
using Input =
  common_msgs::msg::Input_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msgs

#endif  // COMMON_MSGS__MSG__DETAIL__INPUT__STRUCT_HPP_
