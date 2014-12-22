#ifndef INCLUDE_ITEMS_SHIELDS_LARGE_SHIELD_H_
#define INCLUDE_ITEMS_SHIELDS_LARGE_SHIELD_H_

#include <string>

#include "items/shields/shield.h"

namespace d20 {

class LargeShield : public Shield {
 public:
    std::string get_name() const override;
    float get_volume() const override;
    float get_weight() const override;
};

}

#endif  // INCLUDE_ITEMS_SHIELDS_LARGE_SHIELD_H_
