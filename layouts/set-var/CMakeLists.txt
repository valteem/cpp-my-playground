cmake_minimum_required(VERSION 3.22)

message(STATUS "Build dir: " ${CMAKE_BINARY_DIR})
message(STATUS "Source dir: " ${CMAKE_SOURCE_DIR})

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../nested_lib)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../nested_obj)

message(STATUS "CMake module path(s): " "${CMAKE_MODULE_PATH}")

set(CUSTOM_PATH)
list(APPEND CUSTOM_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../some_custom_path)
list(APPEND CUSTOM_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../some_other_custom_path)

message(STATUS "Custom path(s): " "${CUSTOM_PATH}")

if (CMAKE_SYSTEM_NAME STREQUAL "Linux")
message(STATUS "System Name:" ${CMAKE_SYSTEM_NAME})
endif ()

find_package(Git REQUIRED)
if (NOT Git_FOUND)
message(STATUS "Failed to find any Git implementations")
else()
message(STATUS "Git package found:" ${GIT_VERSION_STRING})
endif ()