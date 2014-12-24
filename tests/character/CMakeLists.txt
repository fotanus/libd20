add_executable(test_character test_character.cpp)
target_link_libraries(test_character d20)
add_test(test_character ${CMAKE_CURRENT_BINARY_DIR}/test_character)

add_executable(test_ab_melee test_ab_melee.cpp)
target_link_libraries(test_ab_melee d20)
add_test(test_ab_melee ${CMAKE_CURRENT_BINARY_DIR}/test_ab_melee)

add_executable(test_ab_ranged test_ab_ranged.cpp)
target_link_libraries(test_ab_ranged d20)
add_test(test_ab_ranged ${CMAKE_CURRENT_BINARY_DIR}/test_ab_ranged)

add_executable(test_equip_weapon_and_shield test_equip_weapon_and_shield.cpp)
target_link_libraries(test_equip_weapon_and_shield d20)
add_test(test_equip_weapon_and_shield ${CMAKE_CURRENT_BINARY_DIR}/test_equip_weapon_and_shield)
