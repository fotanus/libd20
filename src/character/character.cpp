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

	int Character::get_strength() { return this->strength; }
	int Character::get_dexterity() { return this->dexterity; }
	int Character::get_constitution() { return this->constitution; }
	int Character::get_intelligence() { return this->intelligence; }
	int Character::get_wisdom() { return this->wisdom; }
	int Character::get_charisma() { return this->charisma; }

	void Character::set_strength(int value) { this->strength = value; }
	void Character::set_dexterity(int value) { this->dexterity = value; }
	void Character::set_constitution(int value) { this->constitution = value; }
	void Character::set_intelligence(int value) { this->intelligence = value; }
	void Character::set_wisdom(int value) { this->wisdom = value; }
	void Character::set_charisma(int value) { this->charisma = value; }
}
