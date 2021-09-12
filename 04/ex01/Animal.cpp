#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "Animal";
	return ;
}

Animal::Animal( Animal const &src ) {

	*this = src;
	std::cout << "Copy Animal constructor called" << std::endl;
	return ;
}

Animal::~Animal( void ) {

	std::cout << "Default Animal destructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=( Animal const &rhs ) {

	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	std::cout << "Assignment Animal operator called" << std::endl;
	return *this;
}

std::string	Animal::getType( void ) const {

	return this->type;
}

void Animal::makeSound( void ) const {

	std::cout << "Some Animal sound, perhaps..." << std::endl;
	return ;
}
