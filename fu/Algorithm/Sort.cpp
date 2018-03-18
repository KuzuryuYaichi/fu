#include "../Algorithm/Util.hpp"

using namespace fu_util::swap;

namespace fu_sort
{
	template <typename T>
	inline constexpr void bubbleSort(T[] arr, const size_t size)
	{
		for (auto i = 0; i < size - 1; i++)
		{
			for (auto j = 0; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])swap(arr[j], arr[j + 1]);
			}
		}
	}

	template <typename T>
	inline constexpr void searchSort(T[] arr, const size_t size)
	{
		for (auto i = 0; i < size - 1; i++)
		{
			for (auto j = i + 1; j < size; j++)
			{
				if (arr[i] > arr[j + 1])swap(arr[j], arr[j + 1]);
			}
		}
	}
}
