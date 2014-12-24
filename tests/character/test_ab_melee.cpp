#include <d20lib.h>
#include <test_helper.h>

int main() {
    d20::Race *race = new d20::Human;
    d20::Class *john_class = new d20::Fighter;
    d20::Character *character = new d20::Character("John", race, john_class);
    ASSERT(character->get_ab() == 1);

    character->set_strength(20);
    ASSERT(character->get_ab() == 6);

    return 0;
}
