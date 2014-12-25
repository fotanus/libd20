#include <string>
#include "character/races/sizes/small.h"

namespace d20 {

    std::string Small::get_name() const {
        return "Small";
    }
    int Small::ab_modifier() const {
        return 1;
    }
    int Small::ac_modifier() const {
        return 1;
    }
    int Small::special_attack_modifier() const {
        return -4;
    }
    int Small::hide_modifier() const {
        return 4;
    }
    float Small::space() const {
        return 1.5;
    }
    float Small::reach() const {
        return 1.5;
    }
    float Small::carrying_capacity_modifier() const {
        return 0.75;
    }

}  // namespace d20
