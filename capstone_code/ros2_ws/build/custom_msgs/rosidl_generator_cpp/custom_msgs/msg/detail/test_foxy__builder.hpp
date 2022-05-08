// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/TestFoxy.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__BUILDER_HPP_

#include "custom_msgs/msg/detail/test_foxy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_TestFoxy_test_int2
{
public:
  explicit Init_TestFoxy_test_int2(::custom_msgs::msg::TestFoxy & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::TestFoxy test_int2(::custom_msgs::msg::TestFoxy::_test_int2_type arg)
  {
    msg_.test_int2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::TestFoxy msg_;
};

class Init_TestFoxy_test_str2
{
public:
  Init_TestFoxy_test_str2()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestFoxy_test_int2 test_str2(::custom_msgs::msg::TestFoxy::_test_str2_type arg)
  {
    msg_.test_str2 = std::move(arg);
    return Init_TestFoxy_test_int2(msg_);
  }

private:
  ::custom_msgs::msg::TestFoxy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::TestFoxy>()
{
  return custom_msgs::msg::builder::Init_TestFoxy_test_str2();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__BUILDER_HPP_
