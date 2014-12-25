#include <string>
#include "character/races/sizes/tiny.h"

namespace d20 {

    std::string Tiny::get_name() const {
        return "Tiny";
    }
    int Tiny::ab_modifier() const {
        return 2;
    }
    int Tiny::ac_modifier() const {
        return 2;
    }
    int Tiny::special_attack_modifier() const {
        return -8;
    }
    int Tiny::hide_modifier() const {
        return 8;
    }
    float Tiny::space() const {
        return 0.6;
    }
    float Tiny::reach() const {
        return 0;
    }
    float Tiny::carrying_capacity_modifier() const {
        return 0.5;
    }

}  // namespace d20
