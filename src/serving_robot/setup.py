from setuptools import find_packages, setup
import glob
import os

package_name = 'serving_robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/'+package_name+'/launch',['launch/serving_robot.launch.py'])
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aaa',
    maintainer_email='aaa@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'KitchenGui = serving_robot.KitchenGui:main',
            'action_test = serving_robot.action_server_test:main',
            'robot_control = serving_robot.robot_control:main'
        ],
    },
)
