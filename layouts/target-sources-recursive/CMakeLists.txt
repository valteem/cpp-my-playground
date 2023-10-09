cmake_minimum_required(VERSION 3.22)

project(target_sources_recursive)

add_executable(target_sources_recursive)

add_subdirectory(src)
add_subdirectory(src/addition)
add_subdirectory(src/multiplication)

target_include_directories(target_sources_recursive PRIVATE include/addition)
target_include_directories(target_sources_recursive PRIVATE include/multiplication)