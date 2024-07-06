cmake_minimum_required(VERSION 3.22)

project(plain_test)

enable_testing()

include_directories($(PROJECT_SOURCE_DIR)/include) # parentheses ...

SET(SOURCEFILES ${PROJECT_SOURCE_DIR}/src/base.cc) # ... vs curly brackets

add_subdirectory(test)