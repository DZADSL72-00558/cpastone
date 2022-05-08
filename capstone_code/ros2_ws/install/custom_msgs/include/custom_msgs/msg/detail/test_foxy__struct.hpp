// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/TestFoxy.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__TestFoxy __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__TestFoxy __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestFoxy_
{
  using Type = TestFoxy_<ContainerAllocator>;

  explicit TestFoxy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->test_str2 = "";
      this->test_int2 = 0l;
    }
  }

  explicit TestFoxy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : test_str2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->test_str2 = "";
      this->test_int2 = 0l;
    }
  }

  // field types and members
  using _test_str2_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _test_str2_type test_str2;
  using _test_int2_type =
    int32_t;
  _test_int2_type test_int2;

  // setters for named parameter idiom
  Type & set__test_str2(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->test_str2 = _arg;
    return *this;
  }
  Type & set__test_int2(
    const int32_t & _arg)
  {
    this->test_int2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::TestFoxy_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::TestFoxy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::TestFoxy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::TestFoxy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::TestFoxy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::TestFoxy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::TestFoxy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::TestFoxy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::TestFoxy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::TestFoxy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__TestFoxy
    std::shared_ptr<custom_msgs::msg::TestFoxy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__TestFoxy
    std::shared_ptr<custom_msgs::msg::TestFoxy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestFoxy_ & other) const
  {
    if (this->test_str2 != other.test_str2) {
      return false;
    }
    if (this->test_int2 != other.test_int2) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestFoxy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestFoxy_

// alias to use template instance with default allocator
using TestFoxy =
  custom_msgs::msg::TestFoxy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__STRUCT_HPP_
