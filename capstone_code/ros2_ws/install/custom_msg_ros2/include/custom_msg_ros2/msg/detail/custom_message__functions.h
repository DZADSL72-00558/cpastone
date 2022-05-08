// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msg_ros2:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_
#define CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msg_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msg_ros2/msg/detail/custom_message__struct.h"

/// Initialize msg/CustomMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msg_ros2__msg__CustomMessage
 * )) before or use
 * custom_msg_ros2__msg__CustomMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_ros2
bool
custom_msg_ros2__msg__CustomMessage__init(custom_msg_ros2__msg__CustomMessage * msg);

/// Finalize msg/CustomMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_ros2
void
custom_msg_ros2__msg__CustomMessage__fini(custom_msg_ros2__msg__CustomMessage * msg);

/// Create msg/CustomMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msg_ros2__msg__CustomMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_ros2
custom_msg_ros2__msg__CustomMessage *
custom_msg_ros2__msg__CustomMessage__create();

/// Destroy msg/CustomMessage message.
/**
 * It calls
 * custom_msg_ros2__msg__CustomMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_ros2
void
custom_msg_ros2__msg__CustomMessage__destroy(custom_msg_ros2__msg__CustomMessage * msg);


/// Initialize array of msg/CustomMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msg_ros2__msg__CustomMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_ros2
bool
custom_msg_ros2__msg__CustomMessage__Sequence__init(custom_msg_ros2__msg__CustomMessage__Sequence * array, size_t size);

/// Finalize array of msg/CustomMessage messages.
/**
 * It calls
 * custom_msg_ros2__msg__CustomMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_ros2
void
custom_msg_ros2__msg__CustomMessage__Sequence__fini(custom_msg_ros2__msg__CustomMessage__Sequence * array);

/// Create array of msg/CustomMessage messages.
/**
 * It allocates the memory for the array and calls
 * custom_msg_ros2__msg__CustomMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_ros2
custom_msg_ros2__msg__CustomMessage__Sequence *
custom_msg_ros2__msg__CustomMessage__Sequence__create(size_t size);

/// Destroy array of msg/CustomMessage messages.
/**
 * It calls
 * custom_msg_ros2__msg__CustomMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_ros2
void
custom_msg_ros2__msg__CustomMessage__Sequence__destroy(custom_msg_ros2__msg__CustomMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG_ROS2__MSG__DETAIL__CUSTOM_MESSAGE__FUNCTIONS_H_
