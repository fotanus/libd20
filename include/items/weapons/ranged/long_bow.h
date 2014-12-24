#ifndef INCLUDE_ITEMS_WEAPONS_RANGED_LONG_BOW_H_
#define INCLUDE_ITEMS_WEAPONS_RANGED_LONG_BOW_H_

#include <string>

#include "items/weapons/ranged/ranged_weapon.h"

namespace d20 {

class LongBow : public RangedWeapon {
 public:
    std::string get_name() const override;
    float get_volume() const override;
    float get_weight() const override;
};

}

#endif  // INCLUDE_ITEMS_WEAPONS_RANGED_LONG_BOW_H_
