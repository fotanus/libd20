#include "character.h"
namespace d20 {
	Character::Character(std::string name, Race *race) {
		this->name = name;
		this->race = race;
	}

	std::string Character::get_name() {
		return this->name;
	}

	Race* Character::get_race() {
		return this->race;
	}
}
