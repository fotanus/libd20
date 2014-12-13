#pragma once

#include "character/classes/class_base.h"

namespace d20 {
	class Fighter : ClassBase {
		public:
			float bab_progression() const override;
			std::string get_name() const override;
	};
}
