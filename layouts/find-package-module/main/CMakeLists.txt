# cmake .. --debug-info

cmake_minimum_required(VERSION 3.22)

project(find-package-module-main CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

message(STATUS "MODULE PATH ${CMAKE_MODULE_PATH}")

find_package(support REQUIRED)

add_executable(main_exec main.cc)

target_include_directories(main_exec PRIVATE ${support_INCLUDE_DIR})

target_link_libraries(main_exec ${support_LIB})