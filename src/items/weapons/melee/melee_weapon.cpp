#include <string>

#include "items/weapons/melee/melee_weapon.h"

namespace d20 {

    std::string MeleeWeapon::get_name() const {
        throw("called get_name on weapon base!");
    }

    float MeleeWeapon::get_volume() const {
        throw("called get_volume on weapon base!");
    }

    float MeleeWeapon::get_weight() const {
        throw("called get_weight on weapon base!");
    }

}  // namespace d20
