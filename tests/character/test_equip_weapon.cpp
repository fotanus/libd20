#include <d20lib.h>
#include <test_helper.h>

int main() {
    d20::Race *race = new d20::Human;
    d20::Class *john_class = new d20::Fighter;
    d20::Character *character = new d20::Character("John", race, john_class);
    d20::Weapon *long_sword = new d20::LongSword();

    character->equip_left_hand(long_sword);

    ASSERT(character->get_left_hand() == long_sword);

    return 0;
}
