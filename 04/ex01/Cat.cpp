#include "Cat.hpp"

Cat::Cat( void ) : _brain( new Brain() ){

	this->Animal::type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
	return ;
}

Cat::Cat( Cat const &src ) {

	*this = src;
	this->Animal::type = src.type;
	this->_brain = new Brain();
	std::cout << "Copy Cat constructor called" << std::endl;
	return ;
}

Cat::~Cat( void ) {

	std::cout << "Default Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat	&Cat::operator=( Cat const &rhs ) {


	if (this == &rhs)
		return *this;
	this->Animal::type = rhs.type;
	this->_brain = new Brain();
	std::cout << "Assignment Cat operator called" << std::endl;
	return *this;
}

void Cat::makeSound( void ) const {

	std::cout << "Meow" << std::endl;
	return ;
}
