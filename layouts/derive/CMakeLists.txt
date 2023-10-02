cmake_minimum_required(VERSION 3.22)

project(derive)

add_subdirectory(main)
add_subdirectory(support)

add_executable(derive "${PROJECT_SOURCE_DIR}/main/main.cpp")

include_directories(derive PUBLIC "${PROJECT_SOURCE_DIR}/support")

target_link_libraries(derive PUBLIC Support)
