#include <iostream>
#include <iomanip>
#include <string>

class	Contact
{
};

class	PhoneBook
{
	public:
		std::array	contact;
};

int main(void)
{
	std::string	cmd;

	while (1)
	{
		std::cout << "phonebook: ";
		std::cin >> cmd;
		if (cmd.compare("EXIT") == 0)
			break ;
		else if (cmd.compare("ADD") == 0)
			std::cout << "Insert new contact\n";
		else if (cmd.compare("SEARCH") == 0)
			std::cout << "Find a registred contact\n";
	}
	return (0);
}
