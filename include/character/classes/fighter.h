#pragma once

#include "character/classes/class.h"

namespace d20 {
    class Fighter : public Class {
        public:
            float bab_progression() const override;
            std::string get_name() const override;
    };
}
