#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {

	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {

	*this = src;
	this->type = src.type;
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "Default WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs ) {

	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	std::cout << "Assignment WrongAnimal operator called" << std::endl;
	return *this;
}

std::string	WrongAnimal::getType( void ) const {

	return this->type;
}

void WrongAnimal::makeSound( void ) const {

	std::cout << "Some WrongAnimal sound, perhaps..." << std::endl;
	return ;
}
