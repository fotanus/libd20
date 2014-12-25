#include <string>
#include "character/races/sizes/huge.h"

namespace d20 {

    std::string Huge::get_name() const {
        return "Huge";
    }
    int Huge::ab_modifier() const {
        return -2;
    }
    int Huge::ac_modifier() const {
        return -2;
    }
    int Huge::special_attack_modifier() const {
        return +8;
    }
    int Huge::hide_modifier() const {
        return -8;
    }
    float Huge::space() const {
        return 4.5;
    }
    float Huge::reach() const {
        return 3;
    }
    float Huge::carrying_capacity_modifier() const {
        return 8;
    }

}  // namespace d20
