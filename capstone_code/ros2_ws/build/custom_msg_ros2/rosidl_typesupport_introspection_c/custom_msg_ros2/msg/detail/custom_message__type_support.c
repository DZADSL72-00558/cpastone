// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msg_ros2:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msg_ros2/msg/detail/custom_message__rosidl_typesupport_introspection_c.h"
#include "custom_msg_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msg_ros2/msg/detail/custom_message__functions.h"
#include "custom_msg_ros2/msg/detail/custom_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msg_ros2__msg__CustomMessage__init(message_memory);
}

void CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_fini_function(void * message_memory)
{
  custom_msg_ros2__msg__CustomMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_member_array[1] = {
  {
    "custom_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msg_ros2__msg__CustomMessage, custom_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_members = {
  "custom_msg_ros2__msg",  // message namespace
  "CustomMessage",  // message name
  1,  // number of fields
  sizeof(custom_msg_ros2__msg__CustomMessage),
  CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_member_array,  // message members
  CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle = {
  0,
  &CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msg_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msg_ros2, msg, CustomMessage)() {
  if (!CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle.typesupport_identifier) {
    CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
