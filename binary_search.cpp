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
			if (point >= arr[size - 1]) return 0;

			int middle = (left + right) / 2;
			int next = middle;

			bool check = arr[middle] == point;
			while (check)
			{
				if (arr[next] < arr[next + 1])
				{
					return (size - 1) - next;
				}

				next += 1;
				check = next < size;
			}

			check = point < arr[middle];

			if (check)
			{
				right = middle - 1;

			}
			else
			{
				left = middle + 1;
			}


			if (left >= right)
			{
				if (point > arr[middle]) return (size - 1) - middle;

				return (size - 1) - right;
			}
		}

		return count;
	}

} // namespace binary_search
