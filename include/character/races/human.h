#pragma once

#include "character/races/race.h"

namespace d20 {
	class Human : public Race {
		public:
			std::string get_name() const override;
	};
}
