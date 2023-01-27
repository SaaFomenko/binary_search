#include <iostream>
#include "binary_search.h"


int main()
{
	std::string msg = "Введите точку отсчёта: ";
	std::string fail_msg = "Неверный ввод, повторите ввод целого числа!";
	std::string res_msg = "Количество элементов в массиве больших, чем ";
	std::string in_user = "";

	int point  = 0;

	bool check = false;
	do
	{
		std::cout << msg;
		std::cin >> in_user;
		try
		{
			point = std::stoi(in_user);
			check = true;
		}
		catch (std::invalid_argument e)
		{
			std::cout << fail_msg << std::endl;
			check = false;
		}
		
	} while (!check);

	int arr[] = {14, 16, 19, 32, 32, 32, 56, 69, 72};
	int size = sizeof(arr) / sizeof(arr[0]);

	int count = binary_search::counter(point, arr, size);

	std::cout << res_msg << point << ": " << count << std::endl;

	return 0;
}
