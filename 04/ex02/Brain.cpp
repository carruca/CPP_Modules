#include <iostream>
#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "Default Brain constructor called" << std::endl;
	return ;
}

Brain::Brain( Brain const &src ) {

	*this = src;
	std::cout << "Copy Brain constructor called" << std::endl;
	return ;
}

Brain::~Brain( void ) {

	std::cout << "Default Brain destructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=( Brain const &rhs ) {


	if (this == &rhs)
		return *this;
	std::cout << "Assignment Brain operator called" << std::endl;
	return *this;
}
