#ifndef INCLUDE_CHARACTER_RACES_SIZES_SIZE_H_
#define INCLUDE_CHARACTER_RACES_SIZES_SIZE_H_

#include<string>

namespace d20 {

class Size {
 public:
    virtual std::string get_name() const;
    virtual int ab_modifier() const;
    virtual int ac_modifier() const;
    virtual int special_attack_modifier() const;
    virtual int hide_modifier() const;
    virtual float space() const;
    virtual float reach() const;
    virtual float carrying_capacity_modifier() const;
};

}  // namespace d20

#endif  // INCLUDE_CHARACTER_RACES_SIZES_SIZE_H_
