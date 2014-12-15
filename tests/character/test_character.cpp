#include <d20lib.h>
#include <test_helper.h>

int main() {
    d20::Race *race = new d20::Human;
    d20::Class *john_class = new d20::Fighter;
    d20::Character *character = new d20::Character("John", race, john_class);
    ASSERT(character != NULL);
    ASSERT(character->get_name() == "John");
    ASSERT(character->get_constitution() == 10);
    ASSERT(character->get_class_level(john_class) == 1);
    return 0;
}
