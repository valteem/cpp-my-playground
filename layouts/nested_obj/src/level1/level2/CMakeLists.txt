# include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(libl2 OBJECT vehicle.cpp)
set( ALL_OBJECT_FILES $<TARGET_OBJECTS:libl2> PARENT_SCOPE)