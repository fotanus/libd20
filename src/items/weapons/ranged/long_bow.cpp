#include <string>

#include "items/weapons/ranged/long_bow.h"

namespace d20 {

    std::string LongBow::get_name() const {
        return "long bow";
    }

    float LongBow::get_volume() const {
        return 87800.0;
    }

    float LongBow::get_weight() const {
        return 4.0;
    }

}  // namespace d20
