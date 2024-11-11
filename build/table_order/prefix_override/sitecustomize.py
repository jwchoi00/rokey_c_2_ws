import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
<<<<<<< HEAD
    sys.prefix = sys.exec_prefix = '/home/g1/rokey_c_2_ws/install/table_order'
=======
    sys.prefix = sys.exec_prefix = '/home/aaa/rokey_c_2_ws/install/table_order'
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
