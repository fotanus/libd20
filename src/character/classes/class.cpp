#include <string>
#include "character/classes/class.h"

namespace d20 {
    bool Class::operator==(const Class &other) const {
        return this->get_name() == other.get_name();
    }

    float Class::bab_progression() const {
        throw("called bab_progression on class base!");
    }

    std::string Class::get_name() const {
        throw("called get_name on class base!");
    }
}  // namespace d20
