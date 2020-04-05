cmake_minimum_required(VERSION 3.10)

# set the project name
project(StackContainer)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(stack_container_test test.cc)
