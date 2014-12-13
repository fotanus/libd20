#include "character/classes/class.h"

namespace d20 {
	float Class::bab_progression() const {
		throw("called bab_progression on class base!");
	}
	std::string Class::get_name() const {
		throw("called get_name on class base!");
	}

}
