#ifndef INCLUDE_ITEMS_WEAPONS_RANGED_RANGED_WEAPON_H_
#define INCLUDE_ITEMS_WEAPONS_RANGED_RANGED_WEAPON_H_

#include <string>

#include "items/weapons/weapon.h"

namespace d20 {

class RangedWeapon : public Weapon {
 public:
    std::string get_name() const override;
    float get_volume() const override;
    float get_weight() const override;
};

}

#endif  // INCLUDE_ITEMS_WEAPONS_RANGED_RANGED_WEAPON_H_
