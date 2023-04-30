cmake_minimum_required(VERSION 3.22)

project(project_layout_example)

add_executable(ple
${CMAKE_SOURCE_DIR}/src/main.cpp
${CMAKE_SOURCE_DIR}/src/sub1/vehicle.cpp
${CMAKE_SOURCE_DIR}/src/sub2/car.cpp
)

target_include_directories(ple PRIVATE
${CMAKE_SOURCE_DIR}/include/sub1
${CMAKE_SOURCE_DIR}/include/sub2
)