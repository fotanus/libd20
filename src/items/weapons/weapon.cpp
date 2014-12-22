#include <string>

#include "items/weapons/weapon.h"

namespace d20 {

    std::string Weapon::get_name() const {
        throw("called get_name on weapon base!");
    }

    float Weapon::get_volume() const {
        throw("called get_volume on weapon base!");
    }

    float Weapon::get_weight() const {
        throw("called get_weight on weapon base!");
    }

}  // namespace d20
