from setuptools import find_packages
from setuptools import setup

setup(
    name='table_order_interface',
    version='0.0.0',
    packages=find_packages(
        include=('table_order_interface', 'table_order_interface.*')),
)
