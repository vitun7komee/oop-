#include <iostream>
#include "1My_list.h"

int main()
{
	LIST list;
	std::ifstream file("dt.txt");
	std::ofstream fileResult("1out.txt");

	int option;

	if (!file)
	{
		std::cout << "Input file not found...\n";

	}
	else
	{
		do {
			std::cout << "Type '1' - to create list by queue\nType '2' - to create list by stack\n"
				"Type '3' - to create list by order\n";
			std::cin >> option;
			switch (option)
			{
			case 1:
			{
				list.create_by_queue(file);
				break;
			}
			case 2:
			{
				list.create_by_stack(file);
				break;
			}
			case 3:
			{
				list.create_by_order(file);
				break;
			}
			default:
			{
				std::cout << "Incorrect input... Please input an integer/correct number!\n";
				break;
			}
			}
		} while (option > 3 || option < 1);
	}

	list.print();
	std::cout << std::endl;

	list.print(fileResult);
	file.close();
	fileResult.close();

	std::cin.get();
}