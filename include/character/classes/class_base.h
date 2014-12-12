#include<string>

namespace d20 {
    class ClassBase {
		std::string name;

		public:
			virtual float bab_progression() const;
			virtual std::string get_name() const;
    };
}
