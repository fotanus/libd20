add_executable(test_character test_character.cpp)
target_link_libraries(test_character d20)
add_test(test_character ${CMAKE_CURRENT_BINARY_DIR}/test_character)
