// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ur_msgs/msg/detail/io_states__struct.h"
#include "ur_msgs/msg/detail/io_states__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ur_msgs/msg/detail/analog__functions.h"
#include "ur_msgs/msg/detail/digital__functions.h"
// end nested array functions include
bool ur_msgs__msg__digital__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ur_msgs__msg__digital__convert_to_py(void * raw_ros_message);
bool ur_msgs__msg__digital__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ur_msgs__msg__digital__convert_to_py(void * raw_ros_message);
bool ur_msgs__msg__digital__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ur_msgs__msg__digital__convert_to_py(void * raw_ros_message);
bool ur_msgs__msg__analog__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ur_msgs__msg__analog__convert_to_py(void * raw_ros_message);
bool ur_msgs__msg__analog__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ur_msgs__msg__analog__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ur_msgs__msg__io_states__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ur_msgs.msg._io_states.IOStates", full_classname_dest, 31) == 0);
  }
  ur_msgs__msg__IOStates * ros_message = _ros_message;
  {  // digital_in_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "digital_in_states");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'digital_in_states'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&(ros_message->digital_in_states), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ur_msgs__msg__Digital__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ur_msgs__msg__Digital * dest = ros_message->digital_in_states.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ur_msgs__msg__digital__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // digital_out_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "digital_out_states");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'digital_out_states'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&(ros_message->digital_out_states), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ur_msgs__msg__Digital__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ur_msgs__msg__Digital * dest = ros_message->digital_out_states.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ur_msgs__msg__digital__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // flag_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_states");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'flag_states'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&(ros_message->flag_states), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ur_msgs__msg__Digital__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ur_msgs__msg__Digital * dest = ros_message->flag_states.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ur_msgs__msg__digital__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // analog_in_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_in_states");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'analog_in_states'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ur_msgs__msg__Analog__Sequence__init(&(ros_message->analog_in_states), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ur_msgs__msg__Analog__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ur_msgs__msg__Analog * dest = ros_message->analog_in_states.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ur_msgs__msg__analog__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // analog_out_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_out_states");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'analog_out_states'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ur_msgs__msg__Analog__Sequence__init(&(ros_message->analog_out_states), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ur_msgs__msg__Analog__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ur_msgs__msg__Analog * dest = ros_message->analog_out_states.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ur_msgs__msg__analog__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ur_msgs__msg__io_states__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IOStates */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ur_msgs.msg._io_states");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IOStates");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ur_msgs__msg__IOStates * ros_message = (ur_msgs__msg__IOStates *)raw_ros_message;
  {  // digital_in_states
    PyObject * field = NULL;
    size_t size = ros_message->digital_in_states.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ur_msgs__msg__Digital * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->digital_in_states.data[i]);
      PyObject * pyitem = ur_msgs__msg__digital__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "digital_in_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // digital_out_states
    PyObject * field = NULL;
    size_t size = ros_message->digital_out_states.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ur_msgs__msg__Digital * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->digital_out_states.data[i]);
      PyObject * pyitem = ur_msgs__msg__digital__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "digital_out_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_states
    PyObject * field = NULL;
    size_t size = ros_message->flag_states.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ur_msgs__msg__Digital * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->flag_states.data[i]);
      PyObject * pyitem = ur_msgs__msg__digital__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_in_states
    PyObject * field = NULL;
    size_t size = ros_message->analog_in_states.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ur_msgs__msg__Analog * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->analog_in_states.data[i]);
      PyObject * pyitem = ur_msgs__msg__analog__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_in_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_out_states
    PyObject * field = NULL;
    size_t size = ros_message->analog_out_states.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ur_msgs__msg__Analog * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->analog_out_states.data[i]);
      PyObject * pyitem = ur_msgs__msg__analog__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_out_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
