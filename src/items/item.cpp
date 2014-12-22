#include <string>

#include "items/item.h"

namespace d20 {

    std::string Item::get_name() const {
        throw("called get_name on item base!");
    }

    float Item::get_volume() const {
        throw("called get_volume on item base!");
    }

    float Item::get_weight() const {
        throw("called get_weight on item base!");
    }

}  // namespace d20
