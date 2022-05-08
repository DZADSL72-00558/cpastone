// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msg_ros2:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
#define CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msg_ros2__msg__CustomMessage __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg_ros2__msg__CustomMessage __declspec(deprecated)
#endif

namespace custom_msg_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMessage_
{
  using Type = CustomMessage_<ContainerAllocator>;

  explicit CustomMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->custom_value = 0.0;
    }
  }

  explicit CustomMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->custom_value = 0.0;
    }
  }

  // field types and members
  using _custom_value_type =
    double;
  _custom_value_type custom_value;

  // setters for named parameter idiom
  Type & set__custom_value(
    const double & _arg)
  {
    this->custom_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg_ros2::msg::CustomMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg_ros2::msg::CustomMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg_ros2::msg::CustomMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg_ros2::msg::CustomMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg_ros2::msg::CustomMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg_ros2::msg::CustomMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg_ros2::msg::CustomMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg_ros2::msg::CustomMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg_ros2::msg::CustomMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg_ros2::msg::CustomMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg_ros2__msg__CustomMessage
    std::shared_ptr<custom_msg_ros2::msg::CustomMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg_ros2__msg__CustomMessage
    std::shared_ptr<custom_msg_ros2::msg::CustomMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMessage_ & other) const
  {
    if (this->custom_value != other.custom_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMessage_

// alias to use template instance with default allocator
using CustomMessage =
  custom_msg_ros2::msg::CustomMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msg_ros2

#endif  // CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
