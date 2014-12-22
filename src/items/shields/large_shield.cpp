#include <string>

#include "items/shields/large_shield.h"

namespace d20 {

    std::string LargeShield::get_name() const {
        return "large shield";
    }

    float LargeShield::get_volume() const {
        return 10.0;
    }

    float LargeShield::get_weight() const {
        return 10.0;
    }

}  // namespace d20
