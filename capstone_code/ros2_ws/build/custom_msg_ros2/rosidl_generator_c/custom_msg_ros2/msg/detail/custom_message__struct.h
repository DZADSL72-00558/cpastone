// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg_ros2:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
#define CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CustomMessage in the package custom_msg_ros2.
typedef struct custom_msg_ros2__msg__CustomMessage
{
  double custom_value;
} custom_msg_ros2__msg__CustomMessage;

// Struct for a sequence of custom_msg_ros2__msg__CustomMessage.
typedef struct custom_msg_ros2__msg__CustomMessage__Sequence
{
  custom_msg_ros2__msg__CustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg_ros2__msg__CustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
