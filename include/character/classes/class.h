#ifndef INCLUDE_CHARACTER_CLASSES_CLASS_H_
#define INCLUDE_CHARACTER_CLASSES_CLASS_H_

#include<string>

namespace d20 {

class Class {
 private:
    std::string name;

 public:
        bool operator==(const Class &other) const;
        virtual float bab_progression() const;
        virtual std::string get_name() const;
};

}  // namespace d20

#endif  // INCLUDE_CHARACTER_CLASSES_CLASS_H_
