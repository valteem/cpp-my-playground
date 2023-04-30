add_subdirectory(level2)

add_library(libl1 OBJECT car.cpp)
set(ALL_OBJECT_FILES
# object files from subdirectory
    ${ALL_OBJECT_FILES}
# object files from current directory
    $<TARGET_OBJECTS:libl1>
    PARENT_SCOPE)