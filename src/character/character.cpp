#include <math.h>
#include <string>

#include "character/character.h"
#include "items/weapons/ranged/ranged_weapon.h"

namespace d20 {
    Character::Character(std::string name, Race *race, Class *cclass) {
        this->name = name;
        this->race = race;
        classes[cclass] = 1;
    }

    std::string Character::get_name() {
        return name;
    }

    Race* Character::get_race() {
        return race;
    }

    HandItem* Character::get_left_hand() {
        return left_hand;
    }

    void Character::equip_left_hand(HandItem *item) {
        left_hand = item;
    }

    HandItem* Character::get_right_hand() {
        return right_hand;
    }

    void Character::equip_right_hand(HandItem *item) {
        right_hand = item;
    }

    int Character::get_class_level(Class *cclass) {
        auto result = classes.find(cclass);
        if ( result == classes.end() ) {
            return 0;
        } else {
            return result->second;
        }
    }

    int Character::get_bab() {
        int bab = 0;
        for ( auto it = classes.begin(); it != classes.end(); ++it ) {
            bab += trunc(it->first->bab_progression() * it->second);
        }
        return bab;
    }

    int Character::str_modifier() {
        return (get_strength() - 10) / 2;
    }

    int Character::dex_modifier() {
        return (get_dexterity() - 10) / 2;
    }

    int Character::get_ab() {
        if ( dynamic_cast<RangedWeapon*>(get_right_hand()) ) {
            return get_bab() + dex_modifier();
        } else {
            return get_bab() + str_modifier();
        }
    }

    int Character::get_strength() { return strength; }
    int Character::get_dexterity() { return dexterity; }
    int Character::get_constitution() { return constitution; }
    int Character::get_intelligence() { return intelligence; }
    int Character::get_wisdom() { return wisdom; }
    int Character::get_charisma() { return charisma; }

    void Character::set_strength(int value) { strength = value; }
    void Character::set_dexterity(int value) { dexterity = value; }
    void Character::set_constitution(int value) { constitution = value; }
    void Character::set_intelligence(int value) { intelligence = value; }
    void Character::set_wisdom(int value) { wisdom = value; }
    void Character::set_charisma(int value) { charisma = value; }
}  // namespace d20
