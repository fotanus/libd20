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
include_directories("include/character/races")

set(classes
		src/character/classes/class.cpp
		src/character/classes/fighter.cpp
)

set(races
		src/character/races/race.cpp
		src/character/races/human.cpp
)

add_library(d20 SHARED src/character/character.cpp ${classes} ${races})

## Tests ##
enable_testing()
add_subdirectory(tests)

## Install ##
install (TARGETS d20 DESTINATION bin)
install (FILES "d20lib.h" DESTINATION include)
