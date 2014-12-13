#pragma once

#include<string>
#include<unordered_map>
#include "character/races/race.h"
#include "character/classes/class.h"
#include "character/classes/class_hasher.h"

namespace d20 {
    class Character {
        std::string name;
		Race *race;
        std::unordered_map<Class, int, ClassHasher> classes;

		int strength = 10, dexterity = 10, constitution = 10,
			intelligence = 10, wisdom = 10, charisma = 10;

		public:
			Character(std::string name, Race *race);
			std::string get_name();
			Race* get_race();

			int get_strength();
			int get_dexterity();
			int get_constitution();
			int get_intelligence();
			int get_wisdom();
			int get_charisma();

			void set_strength(int value);
			void set_dexterity(int value);
			void set_constitution(int value);
			void set_intelligence(int value);
			void set_wisdom(int value);
			void set_charisma(int value);
    };
}
