#include<cassert>
#include "test_helper.h"
#include "d20lib.h"

int main() {
	using namespace d20;
	Race *john_race = new Human;
	Class *john_class = new Fighter;
	Character *character = new Character("John", john_race, john_class);
	ASSERT(character->get_ab() == 1);

	character->set_strength(20);
	ASSERT(character->get_ab() == 6);

	return 0;
}
