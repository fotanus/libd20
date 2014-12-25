#include <string>
#include "character/races/sizes/medium.h"

namespace d20 {

    std::string Medium::get_name() const {
        return "Medium";
    }
    int Medium::ab_modifier() const {
        return 0;
    }
    int Medium::ac_modifier() const {
        return 0;
    }
    int Medium::special_attack_modifier() const {
        return 0;
    }
    int Medium::hide_modifier() const {
        return 0;
    }
    float Medium::space() const {
        return 1.5;
    }
    float Medium::reach() const {
        return 1.5;
    }
    float Medium::carrying_capacity_modifier() const {
        return 1;
    }

}  // namespace d20
