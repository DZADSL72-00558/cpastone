// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/TestFoxy.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/test_foxy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/test_foxy__struct.h"
#include "custom_msgs/msg/detail/test_foxy__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // test_str2
#include "rosidl_runtime_c/string_functions.h"  // test_str2

// forward declare type support functions


using _TestFoxy__ros_msg_type = custom_msgs__msg__TestFoxy;

static bool _TestFoxy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TestFoxy__ros_msg_type * ros_message = static_cast<const _TestFoxy__ros_msg_type *>(untyped_ros_message);
  // Field name: test_str2
  {
    const rosidl_runtime_c__String * str = &ros_message->test_str2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: test_int2
  {
    cdr << ros_message->test_int2;
  }

  return true;
}

static bool _TestFoxy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TestFoxy__ros_msg_type * ros_message = static_cast<_TestFoxy__ros_msg_type *>(untyped_ros_message);
  // Field name: test_str2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->test_str2.data) {
      rosidl_runtime_c__String__init(&ros_message->test_str2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->test_str2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'test_str2'\n");
      return false;
    }
  }

  // Field name: test_int2
  {
    cdr >> ros_message->test_int2;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__TestFoxy(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestFoxy__ros_msg_type * ros_message = static_cast<const _TestFoxy__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name test_str2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->test_str2.size + 1);
  // field.name test_int2
  {
    size_t item_size = sizeof(ros_message->test_int2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TestFoxy__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__TestFoxy(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__TestFoxy(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: test_str2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: test_int2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TestFoxy__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__TestFoxy(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TestFoxy = {
  "custom_msgs::msg",
  "TestFoxy",
  _TestFoxy__cdr_serialize,
  _TestFoxy__cdr_deserialize,
  _TestFoxy__get_serialized_size,
  _TestFoxy__max_serialized_size
};

static rosidl_message_type_support_t _TestFoxy__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestFoxy,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, TestFoxy)() {
  return &_TestFoxy__type_support;
}

#if defined(__cplusplus)
}
#endif
