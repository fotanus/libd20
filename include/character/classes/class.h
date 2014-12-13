#pragma once

#include<string>

namespace d20 {
    class Class {
		std::string name;

		public:
			virtual float bab_progression() const;
			virtual std::string get_name() const;
    };
}
