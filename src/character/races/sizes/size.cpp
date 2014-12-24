#include <string>
#include "character/races/sizes/size.h"


namespace d20 {

    std::string Size::get_name() const {
        throw("called get_name on size base!");
    }
    int Size::ab_modifier() const {
        throw("called ab_modifier on size base!");
    }
    int Size::ac_modifier() const {
        throw("called ac_modifier on size base!");
    }
    int Size::special_attack_modifier() const {
        throw("called special_attack_modifier on size base!");
    }
    int Size::hide_modifier() const {
        throw("called hide_modifier on size base!");
    }
    float Size::space() const {
        throw("called space on size base!");
    }
    float Size::reach() const {
        throw("called reach on size base!");
    }
    float Size::carrying_capacity_modifier() const {
        throw("called carry_capacity_modifier on size base!");
    }

}  // namespace d20
