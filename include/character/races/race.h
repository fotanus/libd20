#ifndef INCLUDE_CHARACTER_RACES_RACE_H_
#define INCLUDE_CHARACTER_RACES_RACE_H_

#include<string>

namespace d20 {

class Race {
 public:
    virtual std::string get_name() const;
};

}

#endif  // INCLUDE_CHARACTER_RACES_RACE_H_
