#include<cassert>
#include "d20lib.h"

int main() {
	using namespace d20;
	Race *john_race = new Human;
	Class *john_class = new Fighter;
	Character *character = new Character("John", john_race, john_class);
	assert(character != NULL);
	assert(character->get_name() == "John");
	assert(character->get_constitution() == 10);
	return 0;
}
