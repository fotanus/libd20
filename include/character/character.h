#pragma once

#include<string>
#include<unordered_map>
#include "character/classes/class_base.h"
#include "character/classes/class_hasher.h"



namespace d20 {
    class Character {
        std::string name;
        std::unordered_map<ClassBase, int, ClassHasher> classes;
		public:
			Character(std::string name);
			std::string get_name();
    };
}
