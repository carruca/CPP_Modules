#include <iostream>
#include <string>
#include "Karen.hpp"

Karen::Karen( void ) {

	this->f[0] = &Karen::debug;
	this->f[1] = &Karen::info;
	this->f[2] = &Karen::warning;
	this->f[3] = &Karen::error;
	return ;
}

Karen::~Karen( void ) {

	return ;
}

void	Karen::complain( std::string level ) {

	std::string	lvls[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int pos = 0; pos < 4; pos++) {

		if (lvls[pos] == level)
			(this->*f[pos])();
	}
	return ;
}

void	Karen::debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << std::endl;
	std::cout << "I just love it!";
	std::cout << std::endl;
	return ;
}

void	Karen::info( void ) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << std::endl;
	std::cout << "You don’t put enough! ";
	std::cout << "If you did I would not have to ask for it!";
	std::cout << std::endl;
	return ;
}

void	Karen::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << std::endl;
	std::cout << "I’ve been coming here for years ";
	std::cout << "and you just started working here last month.";
	std::cout << std::endl;
	return ;
}

void	Karen::error( void ) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, ";
	std::cout << "I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}
