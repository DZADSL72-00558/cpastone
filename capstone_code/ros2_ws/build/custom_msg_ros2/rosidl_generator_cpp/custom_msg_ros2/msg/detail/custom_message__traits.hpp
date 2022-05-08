// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg_ros2:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
#define CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_

#include "custom_msg_ros2/msg/detail/custom_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msg_ros2::msg::CustomMessage>()
{
  return "custom_msg_ros2::msg::CustomMessage";
}

template<>
inline const char * name<custom_msg_ros2::msg::CustomMessage>()
{
  return "custom_msg_ros2/msg/CustomMessage";
}

template<>
struct has_fixed_size<custom_msg_ros2::msg::CustomMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msg_ros2::msg::CustomMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msg_ros2::msg::CustomMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
