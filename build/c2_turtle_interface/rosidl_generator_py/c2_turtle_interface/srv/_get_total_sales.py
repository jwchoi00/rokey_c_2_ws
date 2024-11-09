# generated from rosidl_generator_py/resource/_idl.py.em
# with input from c2_turtle_interface:srv/GetTotalSales.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetTotalSales_Request(type):
    """Metaclass of message 'GetTotalSales_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('c2_turtle_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'c2_turtle_interface.srv.GetTotalSales_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_total_sales__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_total_sales__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_total_sales__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_total_sales__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_total_sales__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetTotalSales_Request(metaclass=Metaclass_GetTotalSales_Request):
    """Message class 'GetTotalSales_Request'."""

    __slots__ = [
        '_date',
    ]

    _fields_and_field_types = {
        'date': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.date = kwargs.get('date', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.date != other.date:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def date(self):
        """Message field 'date'."""
        return self._date

    @date.setter
    def date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'date' field must be of type 'str'"
        self._date = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetTotalSales_Response(type):
    """Metaclass of message 'GetTotalSales_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('c2_turtle_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'c2_turtle_interface.srv.GetTotalSales_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_total_sales__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_total_sales__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_total_sales__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_total_sales__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_total_sales__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetTotalSales_Response(metaclass=Metaclass_GetTotalSales_Response):
    """Message class 'GetTotalSales_Response'."""

    __slots__ = [
        '_total_sales',
    ]

    _fields_and_field_types = {
        'total_sales': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.total_sales = kwargs.get('total_sales', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.total_sales != other.total_sales:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def total_sales(self):
        """Message field 'total_sales'."""
        return self._total_sales

    @total_sales.setter
    def total_sales(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_sales' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_sales' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_sales = value


class Metaclass_GetTotalSales(type):
    """Metaclass of service 'GetTotalSales'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('c2_turtle_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'c2_turtle_interface.srv.GetTotalSales')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_total_sales

            from c2_turtle_interface.srv import _get_total_sales
            if _get_total_sales.Metaclass_GetTotalSales_Request._TYPE_SUPPORT is None:
                _get_total_sales.Metaclass_GetTotalSales_Request.__import_type_support__()
            if _get_total_sales.Metaclass_GetTotalSales_Response._TYPE_SUPPORT is None:
                _get_total_sales.Metaclass_GetTotalSales_Response.__import_type_support__()


class GetTotalSales(metaclass=Metaclass_GetTotalSales):
    from c2_turtle_interface.srv._get_total_sales import GetTotalSales_Request as Request
    from c2_turtle_interface.srv._get_total_sales import GetTotalSales_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
