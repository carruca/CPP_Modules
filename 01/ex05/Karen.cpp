#include <string>
#include "Karen.hpp"

Karen::Karen( void ) {

	return ;
}

Karen::~Karen( void ) {

	return ;
}

void	Karen::complain( std::string level ) {

	return ;
}

void	Karen::debug( void ) {

	std::cout << "I love to get extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << "burger. I just love it!";
	std::cout << std::endl;

	return ;
}

void	Karen::info( void ) {

	std::cout << "I cannot believe adding extra bacon";
	std::cout << "cost more money. You don’t put enough!";
	std::cout << "If you did I would not have to ask for it!";
	std::cout << std::endl;
	return ;
}

void	Karen::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon";
	std::cout << "for free. I’ve been coming here for years";
	std::cout << "and you just started working here last month.";
	std::cout << std::endl;
	return ;
}

void	Karen::error( void ) {

	std::cout << "This is unacceptable,";
	std::cout << "I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}
