from setuptools import find_packages
from setuptools import setup

setup(
    name='common_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('common_msgs', 'common_msgs.*')),
)
