#include <d20lib.h>
#include <test_helper.h>

int main() {
    d20::Race *race = new d20::Human;
    d20::Class *john_class = new d20::Fighter;
    d20::Character *character = new d20::Character("John", race, john_class);
    d20::Weapon *long_sword = new d20::LongSword();
    d20::Shield *large_shield = new d20::LargeShield();

    character->equip_right_hand(long_sword);
    character->equip_left_hand(large_shield);

    ASSERT(character->get_right_hand() == long_sword);
    ASSERT(character->get_left_hand() == large_shield);

    return 0;
}
