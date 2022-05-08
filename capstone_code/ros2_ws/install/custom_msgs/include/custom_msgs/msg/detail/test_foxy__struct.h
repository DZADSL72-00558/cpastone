// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/TestFoxy.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'test_str2'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TestFoxy in the package custom_msgs.
typedef struct custom_msgs__msg__TestFoxy
{
  rosidl_runtime_c__String test_str2;
  int32_t test_int2;
} custom_msgs__msg__TestFoxy;

// Struct for a sequence of custom_msgs__msg__TestFoxy.
typedef struct custom_msgs__msg__TestFoxy__Sequence
{
  custom_msgs__msg__TestFoxy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__TestFoxy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__TEST_FOXY__STRUCT_H_
