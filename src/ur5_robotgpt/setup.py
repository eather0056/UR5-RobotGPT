from setuptools import find_packages, setup

package_name = 'ur5_robotgpt'

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
    maintainer='eth',
    maintainer_email='mdether0056@gmail.com',
     description='A ROS2 package for controlling the UR5 robot using ROS2 Humble.',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'control_robot = ur5_robotgpt.control_robot:main'
        ],
    },
)
