#include<iostream>
#include<cassert>
#include "d20lib.h"

int main() {
	using namespace d20;
	Character *character = new Character("John");
	assert(character != NULL);
	assert(character->get_name() == "John");
	return 0;
}
