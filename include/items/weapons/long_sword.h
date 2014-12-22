#ifndef INCLUDE_ITEMS_WEAPONS_LONG_SWORD_H_
#define INCLUDE_ITEMS_WEAPONS_LONG_SWORD_H_

#include <string>

#include "items/weapons/weapon.h"

namespace d20 {

class LongSword : public Weapon {
 public:
    std::string get_name() const override;
    float get_volume() const override;
    float get_weight() const override;
};

}

#endif  // INCLUDE_ITEMS_WEAPONS_LONG_SWORD_H_
