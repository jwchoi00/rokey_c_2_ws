// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from serving_robot_msgs:msg/TotalPrice2C.idl
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
#include "serving_robot_msgs/msg/detail/total_price2_c__struct.h"
#include "serving_robot_msgs/msg/detail/total_price2_c__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool serving_robot_msgs__msg__total_price2_c__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("serving_robot_msgs.msg._total_price2_c.TotalPrice2C", full_classname_dest, 51) == 0);
  }
  serving_robot_msgs__msg__TotalPrice2C * ros_message = _ros_message;
  {  // price
    PyObject * field = PyObject_GetAttrString(_pymsg, "price");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->price = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * serving_robot_msgs__msg__total_price2_c__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TotalPrice2C */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("serving_robot_msgs.msg._total_price2_c");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TotalPrice2C");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  serving_robot_msgs__msg__TotalPrice2C * ros_message = (serving_robot_msgs__msg__TotalPrice2C *)raw_ros_message;
  {  // price
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->price);
    {
      int rc = PyObject_SetAttrString(_pymessage, "price", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
