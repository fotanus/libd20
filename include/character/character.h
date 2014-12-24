#ifndef INCLUDE_CHARACTER_CHARACTER_H_
#define INCLUDE_CHARACTER_CHARACTER_H_

#include<string>
#include<unordered_map>
#include<vector>
#include "character/races/race.h"
#include "character/classes/class.h"
#include "character/classes/class_hasher.h"
#include "items/item.h"
#include "items/hand_item.h"

namespace d20 {

class Character {
 private:
    std::string name;
    Race *race;
    std::unordered_map<Class*, int, ClassHasher> classes;

    std::vector<Item> inventory;
    HandItem* left_hand;
    HandItem* right_hand;

    int strength = 10, dexterity = 10, constitution = 10,
        intelligence = 10, wisdom = 10, charisma = 10;

 public:
    Character(std::string name, Race *race, Class *cclass);
    std::string get_name();
    Race* get_race();
    int get_class_level(Class *cclass);
    int get_bab();
    int get_ab();

    HandItem* get_left_hand();
    void equip_left_hand(HandItem *item);
    HandItem* get_right_hand();
    void equip_right_hand(HandItem *item);


    int str_modifier();
    int dex_modifier();

    int get_strength();
    int get_dexterity();
    int get_constitution();
    int get_intelligence();
    int get_wisdom();
    int get_charisma();

    void set_strength(int value);
    void set_dexterity(int value);
    void set_constitution(int value);
    void set_intelligence(int value);
    void set_wisdom(int value);
    void set_charisma(int value);
};

}  // namespace d20

#endif  // INCLUDE_CHARACTER_CHARACTER_H_
