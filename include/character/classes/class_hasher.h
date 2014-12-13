#pragma once

namespace d20 {
	struct ClassHasher
	{
		std::size_t operator()(const ClassBase& c) const
		{
			return c.get_name().size();
		}
	};
}
