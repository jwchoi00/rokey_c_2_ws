from setuptools import find_packages
from setuptools import setup

setup(
    name='c2_turtle_interface',
    version='0.0.0',
    packages=find_packages(
        include=('c2_turtle_interface', 'c2_turtle_interface.*')),
)
