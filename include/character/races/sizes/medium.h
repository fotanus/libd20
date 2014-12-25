#ifndef INCLUDE_CHARACTER_RACES_SIZES_MEDIUM_H_
#define INCLUDE_CHARACTER_RACES_SIZES_MEDIUM_H_

#include<string>
#include "character/races/sizes/size.h"

namespace d20 {

class Medium : public Size {
 public:
    std::string get_name() const override;
    int ab_modifier() const override;
    int ac_modifier() const override;
    int special_attack_modifier() const override;
    int hide_modifier() const override;
    float space() const override;
    float reach() const override;
    float carrying_capacity_modifier() const override;
};

}  // namespace d20

#endif  // INCLUDE_CHARACTER_RACES_SIZES_MEDIUM_H_
