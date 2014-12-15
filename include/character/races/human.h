#ifndef INCLUDE_CHARACTER_RACES_HUMAN_H_
#define INCLUDE_CHARACTER_RACES_HUMAN_H_

#include <string>
#include "character/races/race.h"

namespace d20 {

class Human : public Race {
 public:
    std::string get_name() const override;
};

}

#endif  // INCLUDE_CHARACTER_RACES_HUMAN_H_
