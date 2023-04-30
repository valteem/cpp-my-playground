cmake_minimum_required(VERSION 3.22)

project(nested_lib)

add_subdirectory(src)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(nl ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(nl nl_lib_l1)