#include <string>
#include "character/races/race.h"

namespace d20 {
    std::string Race::get_name() const {
        throw("called get_name on race base!");
    }
}
