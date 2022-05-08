// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msg_ros2:msg/CustomMessage.idl
// generated code does not contain a copyright notice
#include "custom_msg_ros2/msg/detail/custom_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msg_ros2/msg/detail/custom_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_msg_ros2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg_ros2
cdr_serialize(
  const custom_msg_ros2::msg::CustomMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: custom_value
  cdr << ros_message.custom_value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msg_ros2::msg::CustomMessage & ros_message)
{
  // Member: custom_value
  cdr >> ros_message.custom_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg_ros2
get_serialized_size(
  const custom_msg_ros2::msg::CustomMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: custom_value
  {
    size_t item_size = sizeof(ros_message.custom_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg_ros2
max_serialized_size_CustomMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: custom_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CustomMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msg_ros2::msg::CustomMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CustomMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msg_ros2::msg::CustomMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CustomMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msg_ros2::msg::CustomMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CustomMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CustomMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _CustomMessage__callbacks = {
  "custom_msg_ros2::msg",
  "CustomMessage",
  _CustomMessage__cdr_serialize,
  _CustomMessage__cdr_deserialize,
  _CustomMessage__get_serialized_size,
  _CustomMessage__max_serialized_size
};

static rosidl_message_type_support_t _CustomMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CustomMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_msg_ros2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_msg_ros2
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msg_ros2::msg::CustomMessage>()
{
  return &custom_msg_ros2::msg::typesupport_fastrtps_cpp::_CustomMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msg_ros2, msg, CustomMessage)() {
  return &custom_msg_ros2::msg::typesupport_fastrtps_cpp::_CustomMessage__handle;
}

#ifdef __cplusplus
}
#endif
