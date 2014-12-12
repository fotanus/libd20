namespace d20 {
	struct ClassHasher
	{
		std::size_t operator()(const ClassBase& k) const
		{
			// TODO: hashing for class base
			return 1;
		}
	};
}
