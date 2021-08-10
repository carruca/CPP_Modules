#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	std::string	cmd;
	PhoneBook	pb;

	while (1)
	{
		std::cout << "Please, input a new command: ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			pb.exit();
		else if (cmd == "ADD")
			pb.add();
		else if (cmd == "SEARCH")
			pb.search();
	}
	return (0);
}
