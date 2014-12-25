#include <string>
#include "character/races/sizes/large.h"

namespace d20 {

    std::string Large::get_name() const {
        return "Large";
    }
    int Large::ab_modifier() const {
        return -1;
    }
    int Large::ac_modifier() const {
        return -1;
    }
    int Large::special_attack_modifier() const {
        return +4;
    }
    int Large::hide_modifier() const {
        return -4;
    }
    float Large::space() const {
        return 3;
    }
    float Large::reach() const {
        return 1.5;
    }
    float Large::carrying_capacity_modifier() const {
        return 2;
    }

}  // namespace d20
