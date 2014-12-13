#include<iostream>
#include<cassert>
#include "d20lib.h"

int main() {
	using namespace d20;
	Race *john_race = new Human;
	Character *character = new Character("John", john_race);
	assert(character != NULL);
	assert(character->get_name() == "John");
	return 0;
}
