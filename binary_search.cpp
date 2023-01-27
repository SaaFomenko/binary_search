#include <iostream>
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
			int next = middle;

			bool check = arr[middle] == point;
			while (check)
			{
				if (arr[next] < arr[next + 1])
				{
					return right - next;
				}

				next += 1;
				check = next < size;
			}
			
			if (point < arr[middle])
			{
				right = middle - 1;
			}
			else
			{
				left = middle + 1;
			}

			std::cout << left << " vs " << right << std::endl;

			if (left + 1 == right)
			{
				return (size - 1) - left;
			}
		}

		return count;
	}

} // namespace binary_search
