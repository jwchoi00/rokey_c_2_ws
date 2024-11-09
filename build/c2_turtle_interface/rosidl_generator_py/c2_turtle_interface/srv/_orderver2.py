# generated from rosidl_generator_py/resource/_idl.py.em
# with input from c2_turtle_interface:srv/Orderver2.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'quantity'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Orderver2_Request(type):
    """Metaclass of message 'Orderver2_Request'."""

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
                'c2_turtle_interface.srv.Orderver2_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__orderver2__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__orderver2__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__orderver2__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__orderver2__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__orderver2__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Orderver2_Request(metaclass=Metaclass_Orderver2_Request):
    """Message class 'Orderver2_Request'."""

    __slots__ = [
        '_table_number',
        '_menu_name',
        '_quantity',
        '_total_price',
    ]

    _fields_and_field_types = {
        'table_number': 'int32',
        'menu_name': 'sequence<string>',
        'quantity': 'sequence<int32>',
        'total_price': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.table_number = kwargs.get('table_number', int())
        self.menu_name = kwargs.get('menu_name', [])
        self.quantity = array.array('i', kwargs.get('quantity', []))
        self.total_price = kwargs.get('total_price', int())

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
        if self.table_number != other.table_number:
            return False
        if self.menu_name != other.menu_name:
            return False
        if self.quantity != other.quantity:
            return False
        if self.total_price != other.total_price:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def table_number(self):
        """Message field 'table_number'."""
        return self._table_number

    @table_number.setter
    def table_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'table_number' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'table_number' field must be an integer in [-2147483648, 2147483647]"
        self._table_number = value

    @builtins.property
    def menu_name(self):
        """Message field 'menu_name'."""
        return self._menu_name

    @menu_name.setter
    def menu_name(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'menu_name' field must be a set or sequence and each value of type 'str'"
        self._menu_name = value

    @builtins.property
    def quantity(self):
        """Message field 'quantity'."""
        return self._quantity

    @quantity.setter
    def quantity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'quantity' array.array() must have the type code of 'i'"
            self._quantity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'quantity' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._quantity = array.array('i', value)

    @builtins.property
    def total_price(self):
        """Message field 'total_price'."""
        return self._total_price

    @total_price.setter
    def total_price(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_price' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_price' field must be an integer in [-2147483648, 2147483647]"
        self._total_price = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Orderver2_Response(type):
    """Metaclass of message 'Orderver2_Response'."""

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
                'c2_turtle_interface.srv.Orderver2_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__orderver2__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__orderver2__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__orderver2__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__orderver2__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__orderver2__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Orderver2_Response(metaclass=Metaclass_Orderver2_Response):
    """Message class 'Orderver2_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_Orderver2(type):
    """Metaclass of service 'Orderver2'."""

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
                'c2_turtle_interface.srv.Orderver2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__orderver2

            from c2_turtle_interface.srv import _orderver2
            if _orderver2.Metaclass_Orderver2_Request._TYPE_SUPPORT is None:
                _orderver2.Metaclass_Orderver2_Request.__import_type_support__()
            if _orderver2.Metaclass_Orderver2_Response._TYPE_SUPPORT is None:
                _orderver2.Metaclass_Orderver2_Response.__import_type_support__()


class Orderver2(metaclass=Metaclass_Orderver2):
    from c2_turtle_interface.srv._orderver2 import Orderver2_Request as Request
    from c2_turtle_interface.srv._orderver2 import Orderver2_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
