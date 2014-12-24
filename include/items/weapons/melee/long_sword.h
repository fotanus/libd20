#ifndef INCLUDE_ITEMS_WEAPONS_MELEE_LONG_SWORD_H_
#define INCLUDE_ITEMS_WEAPONS_MELEE_LONG_SWORD_H_

#include <string>

#include "items/weapons/melee/melee_weapon.h"

namespace d20 {

class LongSword : public MeleeWeapon {
 public:
    std::string get_name() const override;
    float get_volume() const override;
    float get_weight() const override;
};

}

#endif  // INCLUDE_ITEMS_WEAPONS_MELEE_LONG_SWORD_H_
