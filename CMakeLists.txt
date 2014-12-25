cmake_minimum_required (VERSION 3.0)
project (libd20)

set (VERSION_MAJOR 0)
set (VERSION_MINOR 1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -std=c++11")

if(POLICY CMP0042)
    cmake_policy(SET CMP0042 NEW)
endif()

## lint ##
find_package(PythonInterp)
if(PYTHONINTERP_FOUND)
    set(filter -legal/copyright)
    file(GLOB_RECURSE srcs src/*.cpp)
    file(GLOB_RECURSE includes include/*.h)
    file(GLOB_RECURSE tests tests/*.cpp)
    execute_process(
        COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/cpplint.py
       --filter=${filter} ${srcs} ${includes} ${tests}
       RESULT_VARIABLE cpplint_output
    )
    if(NOT "${cpplint_output}" STREQUAL "0")
        message(FATAL_ERROR "cpplint failed with return value ${cpplint_output}")
    endif()
else()
    message(WARNING "Python not found - not running lint check on code")
endif()


## Compile ##
include_directories("include")
include_directories("include/character")
include_directories("include/character/classes")
include_directories("include/character/races")
include_directories("include/items")
include_directories("include/items/weapons")
include_directories("include/items/shields")

set(classes
    src/character/classes/class.cpp
    src/character/classes/fighter.cpp
)

set(races
    src/character/races/race.cpp
    src/character/races/human.cpp

    src/character/races/sizes/size.cpp
    src/character/races/sizes/colossal.cpp
    src/character/races/sizes/diminutive.cpp
    src/character/races/sizes/fine.cpp
    src/character/races/sizes/gargantuan.cpp
    src/character/races/sizes/huge.cpp
    src/character/races/sizes/large.cpp
    src/character/races/sizes/medium.cpp
    src/character/races/sizes/small.cpp
    src/character/races/sizes/tiny.cpp
)

set(items
    src/items/item.cpp
    src/items/weapons/weapon.cpp
    src/items/weapons/melee/melee_weapon.cpp
    src/items/weapons/melee/long_sword.cpp
    src/items/weapons/ranged/ranged_weapon.cpp
    src/items/weapons/ranged/long_bow.cpp
    src/items/shields/shield.cpp
    src/items/shields/large_shield.cpp
)

add_library(d20 SHARED src/character/character.cpp ${classes} ${races} ${items})

## Tests ##
enable_testing()
add_subdirectory(tests)

## Install ##
install (TARGETS d20 DESTINATION bin)
install (FILES "d20lib.h" DESTINATION include)
