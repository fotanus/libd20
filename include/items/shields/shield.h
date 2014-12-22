#ifndef INCLUDE_ITEMS_SHIELDS_SHIELD_H_
#define INCLUDE_ITEMS_SHIELDS_SHIELD_H_

#include <string>

#include "items/hand_item.h"

namespace d20 {

class Shield : public HandItem {
 public:
    std::string get_name() const override;
    float get_volume() const override;
    float get_weight() const override;
};

}

#endif  // INCLUDE_ITEMS_SHIELDS_SHIELD_H_
