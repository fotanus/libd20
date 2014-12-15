#ifndef INCLUDE_CHARACTER_CLASSES_FIGHTER_H_
#define INCLUDE_CHARACTER_CLASSES_FIGHTER_H_

#include <string>
#include "character/classes/class.h"

namespace d20 {

class Fighter : public Class {
 public:
        float bab_progression() const override;
        std::string get_name() const override;
};

}

#endif  // INCLUDE_CHARACTER_CLASSES_FIGHTER_H_
