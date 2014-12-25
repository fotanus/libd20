#include <string>
#include "character/races/sizes/colossal.h"

namespace d20 {

    std::string Colossal::get_name() const {
        return "Colossal";
    }
    int Colossal::ab_modifier() const {
        return -8;
    }
    int Colossal::ac_modifier() const {
        return -8;
    }
    int Colossal::special_attack_modifier() const {
        return +16;
    }
    int Colossal::hide_modifier() const {
        return -16;
    }
    float Colossal::space() const {
        return 9;
    }
    float Colossal::reach() const {
        return 6;
    }
    float Colossal::carrying_capacity_modifier() const {
        return 16;
    }

}  // namespace d20
