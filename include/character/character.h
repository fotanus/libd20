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
		public:
			Character(std::string name, Race *race);
			std::string get_name();
			Race* get_race();
    };
}
