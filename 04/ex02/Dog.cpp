#include "Dog.hpp"

Dog::Dog( void ) : _brain( new Brain() ) {

	this->Animal::type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	return ;
}

Dog::Dog( Dog const &src ) {

	*this = src;
	this->Animal::type = src.type;
	this->_brain = new Brain();
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
	this->Animal::type = rhs.type;
	this->_brain = new Brain();
	std::cout << "Assignment Dog operator called" << std::endl;
	return *this;
}

void Dog::makeSound( void ) const {

	std::cout << "Barking dog" << std::endl;
	return ;
}
