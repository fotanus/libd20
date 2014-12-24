#include <string>

#include "items/weapons/ranged/ranged_weapon.h"

namespace d20 {

  std::string RangedWeapon::get_name() const {
    throw("called get_name on ranged weapon base!");
  }

  float RangedWeapon::get_volume() const {
    throw("called get_volume on ranged weapon base!");
  }

  float RangedWeapon::get_weight() const {
    throw("called get_weight on ranged weapon base!");
  }

}  // namespace d20
