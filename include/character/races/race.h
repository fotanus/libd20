#pragma once

#include<string>

namespace d20 {
    class Race {
		public:
			virtual std::string get_name() const;
    };
}
