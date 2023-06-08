import pathlib

from setuptools import find_packages, setup

# The directory containing this file
HERE = pathlib.Path(__file__).parent

# The text of the README file
README = (HERE / "README.md").read_text()

setup(
    name="runawayClock",
    version="0.2.5",
    author="GaelicGrime",
    author_email="will.angus.blaylock@gmail.com",
    url="https://github.com/ComfortableSoftware/runawayClock",
    description="Simple on screen clock.",
    long_description=README,
    long_description_content_type="text/markdown",
    packages=find_packages(exclude=("tests",)),
    install_requires=[
        "PySimpleGUI"
      ],
    # classifiers=[],
    python_requires=">=3.2",
  )
