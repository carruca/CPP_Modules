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
		std::cout << "phonebook: ";
		std::cin >> cmd;
		if (cmd.compare("EXIT") == 0)
			break ;
		else if (cmd.compare("ADD") == 0)
			pb.setContact();
		else if (cmd.compare("SEARCH") == 0)
			std::cout << "Find a registred contact\n";
	}
	return (0);
}