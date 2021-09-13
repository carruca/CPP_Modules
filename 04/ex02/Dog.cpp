#include "Dog.hpp"

Dog::Dog( void ) {

	Animal::type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	_brain = new Brain();
	return ;
}

Dog::Dog( Dog const &src ) {

	*this = src;
	std::cout << "Copy Dog constructor called" << std::endl;
	return ;
}

Dog::~Dog( void ) {

	std::cout << "Default Dog destructor called" << std::endl;
	delete _brain;
	return ;
}

Dog	&Dog::operator=( Dog const &rhs ) {


	if (this == &rhs)
		return *this;
	Animal::type = rhs.type;
	std::cout << "Assignment Dog operator called" << std::endl;
	_brain = new Brain();
	return *this;
}

void Dog::makeSound( void ) const {

	std::cout << "Barking dog" << std::endl;
	return ;
}
