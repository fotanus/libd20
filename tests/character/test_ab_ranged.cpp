#include <d20lib.h>
#include <test_helper.h>

int main() {
    d20::Race *race = new d20::Human;
    d20::Class *john_class = new d20::Fighter;
    d20::Character *character = new d20::Character("John", race, john_class);

    d20::Weapon *long_bow = new d20::LongBow;
    character->equip_right_hand(long_bow);

    character->set_dexterity(20);

    ASSERT(character->get_ab() == 6);

    return 0;
}
