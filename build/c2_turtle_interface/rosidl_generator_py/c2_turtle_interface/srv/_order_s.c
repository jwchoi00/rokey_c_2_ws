// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from c2_turtle_interface:srv/Order.idl
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
#include "c2_turtle_interface/srv/detail/order__struct.h"
#include "c2_turtle_interface/srv/detail/order__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool c2_turtle_interface__srv__order__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("c2_turtle_interface.srv._order.Order_Request", full_classname_dest, 44) == 0);
  }
  c2_turtle_interface__srv__Order_Request * ros_message = _ros_message;
  {  // table_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "table_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->table_number = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // menu_item
    PyObject * field = PyObject_GetAttrString(_pymsg, "menu_item");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->menu_item, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // quantity
    PyObject * field = PyObject_GetAttrString(_pymsg, "quantity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quantity = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // total_price
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_price");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_price = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * c2_turtle_interface__srv__order__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Order_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("c2_turtle_interface.srv._order");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Order_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  c2_turtle_interface__srv__Order_Request * ros_message = (c2_turtle_interface__srv__Order_Request *)raw_ros_message;
  {  // table_number
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->table_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "table_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // menu_item
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->menu_item.data,
      strlen(ros_message->menu_item.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "menu_item", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quantity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->quantity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quantity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_price
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_price);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_price", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "c2_turtle_interface/srv/detail/order__struct.h"
// already included above
// #include "c2_turtle_interface/srv/detail/order__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool c2_turtle_interface__srv__order__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("c2_turtle_interface.srv._order.Order_Response", full_classname_dest, 45) == 0);
  }
  c2_turtle_interface__srv__Order_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * c2_turtle_interface__srv__order__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Order_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("c2_turtle_interface.srv._order");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Order_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  c2_turtle_interface__srv__Order_Response * ros_message = (c2_turtle_interface__srv__Order_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
