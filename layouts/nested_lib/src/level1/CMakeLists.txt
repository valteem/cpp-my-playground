add_subdirectory(level2)

# include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(nl_lib_l1 car.cpp)
target_link_libraries(nl_lib_l1 nl_lib_l2)