#include <string>
#include "character/races/sizes/diminutive.h"

namespace d20 {

    std::string Diminutive::get_name() const {
        return "Diminutive";
    }
    int Diminutive::ab_modifier() const {
        return 4;
    }
    int Diminutive::ac_modifier() const {
        return 4;
    }
    int Diminutive::special_attack_modifier() const {
        return -12;
    }
    int Diminutive::hide_modifier() const {
        return +12;
    }
    float Diminutive::space() const {
        return 0.3;
    }
    float Diminutive::reach() const {
        return 0;
    }
    float Diminutive::carrying_capacity_modifier() const {
        return 0.25;
    }

}  // namespace d20
