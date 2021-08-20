#include <string>
#include <iostream>

int	main( void ) {

	std::string	string		= "HI THIS IS BRAIN";
	std::string	*stringPTR	= &string;
	std::string	&stringREF	= string;

	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address using stringREF: " << &stringREF << std::endl;
	std::cout << "String using stringPTR: " << *stringPTR << std::endl;
	std::cout << "String using stringREF: " << stringREF << std::endl;

	return 0;
}
