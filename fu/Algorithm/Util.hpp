namespace fu_util
{
	template <typename T>
	inline constexpr void swap(T& _, T& __)
	{
		auto ___ = _;
		_ = __;
		__ = ___;
	}
}

