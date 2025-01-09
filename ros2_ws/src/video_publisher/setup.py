from setuptools import find_packages, setup

package_name = 'video_publisher'

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
    maintainer='shubh',
    maintainer_email='shubhsinghal02@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts':  ['video_publisher_node = video_publisher.video_publisher_node:main',
        'video_object_detection = video_publisher.video_object_detection:main',
        'pyreal = video_publisher.pyreal:main',
        'object_detector = video_publisher.object_detector:main'
        ],
    },
)
