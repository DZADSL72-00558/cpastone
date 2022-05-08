// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg_ros2:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
#define CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_

#include "custom_msg_ros2/msg/detail/custom_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msg_ros2
{

namespace msg
{

namespace builder
{

class Init_CustomMessage_custom_value
{
public:
  Init_CustomMessage_custom_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msg_ros2::msg::CustomMessage custom_value(::custom_msg_ros2::msg::CustomMessage::_custom_value_type arg)
  {
    msg_.custom_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg_ros2::msg::CustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg_ros2::msg::CustomMessage>()
{
  return custom_msg_ros2::msg::builder::Init_CustomMessage_custom_value();
}

}  // namespace custom_msg_ros2

#endif  // CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
