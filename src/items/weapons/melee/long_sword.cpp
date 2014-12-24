#include <string>

#include "items/weapons/melee/long_sword.h"

namespace d20 {

    std::string LongSword::get_name() const {
        return "long sword";
    }

    float LongSword::get_volume() const {
        return 37800.0;
    }

    float LongSword::get_weight() const {
        return 4.0;
    }

}  // namespace d20
