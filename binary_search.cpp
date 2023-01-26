#include "binary_search.h"

namespace binary_search {

	int counter(int point, int *arr, int size)
	{
		int count = 0;
		int left = 0;
		int right = size - 1;

		while(left < right)
		{
			int middle = (left + right) / 2;

			if (arr[middle] == point)
			{
				return right - middle;
			}
		}

		return count;
	}

} // namespace binary_search
