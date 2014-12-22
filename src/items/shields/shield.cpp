#include <string>

#include "items/shields/shield.h"

namespace d20 {

    std::string Shield::get_name() const {
        throw("called get_name on shield base!");
    }

    float Shield::get_volume() const {
        throw("called get_volume on shield base!");
    }

    float Shield::get_weight() const {
        throw("called get_weight on shield base!");
    }

}  // namespace d20
