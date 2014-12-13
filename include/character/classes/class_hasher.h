#pragma once

namespace d20 {
	/*
	 * Hashes a character class using the class name.
	 * The hash technique for strings  is called djb2
	 * http://www.cse.yorku.ca/~oz/hash.html
	 */
	struct ClassHasher
	{
		std::size_t operator()(const Class& c) const
		{
			unsigned long hash = 5381;
			const char * class_name = c.get_name().c_str();
			int current;
			while((current = *class_name++) != 0)
				hash = ((hash << 5) + hash) + current;

			return hash;
		}
	};
}
