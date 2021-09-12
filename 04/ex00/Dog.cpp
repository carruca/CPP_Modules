#include "Dog.hpp"

Dog::Dog( void ) {

	Animal::type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	return ;
}

Dog::Dog( Dog const &src ) {

	*this = src;
	std::cout << "Copy Dog constructor called" << std::endl;
	return ;
}

Dog::~Dog( void ) {

	std::cout << "Default Dog destructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=( Dog const &rhs ) {


	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	std::cout << "Assignment Dog operator called" << std::endl;
	return *this;
}

void Dog::makeSound( void ) const {

	std::cout << "Barking dog" << std::endl;
	return ;
}
