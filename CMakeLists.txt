cmake_minimum_required (VERSION 2.6)
project (libd20)

set (VERSION_MAJOR 0)
set (VERSION_MINOR 1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -std=c++11")

configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
)

## Compile ##
include_directories("include")
include_directories("include/character")
include_directories("include/character/classes")

get_property(inc_dirs DIRECTORY PROPERTY INCLUDE_DIRECTORIES)
message("inc_dirs = ${inc_dirs}")

set(classes src/character/classes/class_base.cpp src/character/classes/fighter.cpp)
add_library(d20 SHARED src/character/character.cpp ${classes})

## Tests ##
enable_testing()
add_subdirectory(tests)

## Install ##
install (TARGETS d20 DESTINATION bin)
install (FILES "d20lib.h" DESTINATION include)
