from setuptools import find_packages, setup

package_name = 'c2_turtle_order_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='g1',
    maintainer_email='jwchoi0017@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'order_saver = c2_turtle_order_package.order_saver:main',
            'order_client = c2_turtle_order_package.order_client:main',
            'total_sales_client = c2_turtle_order_package.total_sales_client:main'
        ],
    },
)
