#include <string>
#include "character/races/sizes/fine.h"

namespace d20 {

    std::string Fine::get_name() const {
        return "Fine";
    }
    int Fine::ab_modifier() const {
        return 8;
    }
    int Fine::ac_modifier() const {
        return 8;
    }
    int Fine::special_attack_modifier() const {
        return -16;
    }
    int Fine::hide_modifier() const {
        return +16;
    }
    float Fine::space() const {
        return 0.15;
    }
    float Fine::reach() const {
        return 0;
    }
    float Fine::carrying_capacity_modifier() const {
        return 0.125;
    }

}  // namespace d20
