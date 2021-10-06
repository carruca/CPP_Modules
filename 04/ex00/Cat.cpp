#include "Cat.hpp"

Cat::Cat( void ) {

	this->Animal::type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
	return ;
}

Cat::Cat( Cat const &src ) {

	*this = src;
	this->Animal::type = src.type;
	std::cout << "Copy Cat constructor called" << std::endl;
	return ;
}

Cat::~Cat( void ) {

	std::cout << "Default Cat destructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=( Cat const &rhs ) {


	if (this == &rhs)
		return *this;
	this->Animal::type = rhs.type;
	std::cout << "Assignment Cat operator called" << std::endl;
	return *this;
}

void Cat::makeSound( void ) const {

	std::cout << "Meow" << std::endl;
	return ;
}
