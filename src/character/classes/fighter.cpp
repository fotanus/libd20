#include <string>
#include "character/classes/fighter.h"

namespace d20 {
    std::string Fighter::get_name() const {
        return "Fighter";
    }
    float Fighter::bab_progression() const {
        return 1.0;
    }
}  // namespace d20
