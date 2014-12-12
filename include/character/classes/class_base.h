namespace d20 {
    class ClassBase {
		std::string name;
		bool operator==(const ClassBase& other) const { return true;};
    };
}
