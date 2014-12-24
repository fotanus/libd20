add_executable(test_item_weight test_item_weight.cpp)
target_link_libraries(test_item_weight d20)
add_test(test_item_weight ${CMAKE_CURRENT_BINARY_DIR}/test_item_weight)

add_executable(test_item_volume test_item_volume.cpp)
target_link_libraries(test_item_volume d20)
add_test(test_item_volume ${CMAKE_CURRENT_BINARY_DIR}/test_item_volume)

add_executable(test_item_name test_item_name.cpp)
target_link_libraries(test_item_name d20)
add_test(test_item_name ${CMAKE_CURRENT_BINARY_DIR}/test_item_name)

add_executable(test_item_ranged test_item_ranged.cpp)
target_link_libraries(test_item_ranged d20)
add_test(test_item_ranged ${CMAKE_CURRENT_BINARY_DIR}/test_item_ranged)
