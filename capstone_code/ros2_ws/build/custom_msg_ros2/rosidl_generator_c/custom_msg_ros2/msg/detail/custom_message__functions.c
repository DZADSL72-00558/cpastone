// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msg_ros2:msg/CustomMessage.idl
// generated code does not contain a copyright notice
#include "custom_msg_ros2/msg/detail/custom_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_msg_ros2__msg__CustomMessage__init(custom_msg_ros2__msg__CustomMessage * msg)
{
  if (!msg) {
    return false;
  }
  // custom_value
  return true;
}

void
custom_msg_ros2__msg__CustomMessage__fini(custom_msg_ros2__msg__CustomMessage * msg)
{
  if (!msg) {
    return;
  }
  // custom_value
}

custom_msg_ros2__msg__CustomMessage *
custom_msg_ros2__msg__CustomMessage__create()
{
  custom_msg_ros2__msg__CustomMessage * msg = (custom_msg_ros2__msg__CustomMessage *)malloc(sizeof(custom_msg_ros2__msg__CustomMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msg_ros2__msg__CustomMessage));
  bool success = custom_msg_ros2__msg__CustomMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msg_ros2__msg__CustomMessage__destroy(custom_msg_ros2__msg__CustomMessage * msg)
{
  if (msg) {
    custom_msg_ros2__msg__CustomMessage__fini(msg);
  }
  free(msg);
}


bool
custom_msg_ros2__msg__CustomMessage__Sequence__init(custom_msg_ros2__msg__CustomMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msg_ros2__msg__CustomMessage * data = NULL;
  if (size) {
    data = (custom_msg_ros2__msg__CustomMessage *)calloc(size, sizeof(custom_msg_ros2__msg__CustomMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msg_ros2__msg__CustomMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msg_ros2__msg__CustomMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msg_ros2__msg__CustomMessage__Sequence__fini(custom_msg_ros2__msg__CustomMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msg_ros2__msg__CustomMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msg_ros2__msg__CustomMessage__Sequence *
custom_msg_ros2__msg__CustomMessage__Sequence__create(size_t size)
{
  custom_msg_ros2__msg__CustomMessage__Sequence * array = (custom_msg_ros2__msg__CustomMessage__Sequence *)malloc(sizeof(custom_msg_ros2__msg__CustomMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msg_ros2__msg__CustomMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msg_ros2__msg__CustomMessage__Sequence__destroy(custom_msg_ros2__msg__CustomMessage__Sequence * array)
{
  if (array) {
    custom_msg_ros2__msg__CustomMessage__Sequence__fini(array);
  }
  free(array);
}
