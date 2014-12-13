add_executable(test_character test_character.cpp)
target_link_libraries(test_character d20)
add_test(test_character ${CMAKE_CURRENT_BINARY_DIR}/test_character)

add_executable(test_ab test_ab.cpp)
target_link_libraries(test_ab d20)
add_test(test_ab ${CMAKE_CURRENT_BINARY_DIR}/test_ab)
