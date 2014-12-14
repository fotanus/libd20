#include <math.h>
#include "character.h"

namespace d20 {
    Character::Character(std::string name, Race *race, Class *cclass) {
        this->name = name;
        this->race = race;
        this->classes[cclass] = 1;
    }

    std::string Character::get_name() {
        return this->name;
    }

    Race* Character::get_race() {
        return this->race;
    }

    int Character::get_class_level(Class *cclass) {
        auto result = this->classes.find(cclass);
        if(result == this->classes.end()){
            return 0;
        } else {
            return result->second;
        }
    }

    int Character::get_bab() {
        int bab = 0;
        for(auto it = this->classes.begin(); it != this->classes.end(); ++it){
            bab += trunc(it->first->bab_progression() * it->second);
        }
        return bab;
    }

    int Character::str_modifier() {
        return (this->get_strength() - 10) / 2;
    }

    int Character::get_ab() {
        return get_bab() + str_modifier();
    }

    int Character::get_strength() { return this->strength; }
    int Character::get_dexterity() { return this->dexterity; }
    int Character::get_constitution() { return this->constitution; }
    int Character::get_intelligence() { return this->intelligence; }
    int Character::get_wisdom() { return this->wisdom; }
    int Character::get_charisma() { return this->charisma; }

    void Character::set_strength(int value) { this->strength = value; }
    void Character::set_dexterity(int value) { this->dexterity = value; }
    void Character::set_constitution(int value) { this->constitution = value; }
    void Character::set_intelligence(int value) { this->intelligence = value; }
    void Character::set_wisdom(int value) { this->wisdom = value; }
    void Character::set_charisma(int value) { this->charisma = value; }
}
