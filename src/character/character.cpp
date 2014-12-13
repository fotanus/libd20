#include "character.h"
namespace d20 {
	Character::Character(std::string name) {
		this->name = name;
	}

	std::string Character::get_name() {
		return this->name;
	}
}
