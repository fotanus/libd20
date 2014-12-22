#ifndef INCLUDE_ITEMS_WEAPONS_WEAPON_H_
#define INCLUDE_ITEMS_WEAPONS_WEAPON_H_

#include <string>

#include "items/hand_item.h"

namespace d20 {

class Weapon : public HandItem {
 public:
    std::string get_name() const override;
    float get_volume() const override;
    float get_weight() const override;
};

}

#endif  // INCLUDE_ITEMS_WEAPONS_WEAPON_H_
