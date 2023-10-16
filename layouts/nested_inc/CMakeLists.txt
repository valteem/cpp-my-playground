cmake_minimum_required(VERSION 3.22)
project(nested_include VERSION 0.1.0 LANGUAGES C CXX)

add_executable(nested_include)
target_include_directories(nested_include PRIVATE include)
add_subdirectory(src)
target_sources(nested_include PRIVATE main.cpp)