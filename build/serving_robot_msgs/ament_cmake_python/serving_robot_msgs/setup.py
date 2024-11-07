from setuptools import find_packages
from setuptools import setup

setup(
    name='serving_robot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('serving_robot_msgs', 'serving_robot_msgs.*')),
)
