message(STATUS "scrolling through SRC dir")
add_subdirectory(add4)
target_sources(nested_include PRIVATE add2.cpp
                                      add3.cpp)