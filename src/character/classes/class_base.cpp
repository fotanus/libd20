#include "character/classes/class_base.h"

namespace d20 {
	float ClassBase::bab_progression() const {
		throw("called bab_progression on class base!");
	}
	std::string ClassBase::get_name() const {
		throw("called get_name on class base!");
	}

}
