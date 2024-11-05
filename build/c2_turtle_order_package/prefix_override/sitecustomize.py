import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/g1/rokey_c2_ws/install/c2_turtle_order_package'
