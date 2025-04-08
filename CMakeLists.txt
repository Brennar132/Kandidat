cmake_minimum_required(VERSION 3.12)

project(example)

# Specify the correct path to pybind11Config.cmake
set(pybind11_DIR "/home/olibre/Kandidat/.venv/lib/python3.12/site-packages/pybind11/share/cmake/pybind11")
find_package(pybind11 REQUIRED)

# Create the shared library
add_library(example MODULE example.cpp)

# Set the correct output directory for the shared library
set_target_properties(example PROPERTIES PREFIX "${PYTHON_MODULE_PREFIX}" SUFFIX "${PYTHON_MODULE_EXTENSION}")

# Link pybind11
target_link_libraries(example PRIVATE pybind11::module)
