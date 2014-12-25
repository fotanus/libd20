#include <string>
#include "character/races/sizes/gargantuan.h"

namespace d20 {

    std::string Gargantuan::get_name() const {
        return "Gargantuan";
    }
    int Gargantuan::ab_modifier() const {
        return -4;
    }
    int Gargantuan::ac_modifier() const {
        return -4;
    }
    int Gargantuan::special_attack_modifier() const {
        return +12;
    }
    int Gargantuan::hide_modifier() const {
        return -12;
    }
    float Gargantuan::space() const {
        return 6;
    }
    float Gargantuan::reach() const {
        return 4.5;
    }
    float Gargantuan::carrying_capacity_modifier() const {
        return 12;
    }

}  // namespace d20
