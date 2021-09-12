#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	WrongAnimal::type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const &src ) {

	*this = src;
	std::cout << "Copy WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat( void ) {

	std::cout << "Default WrongCat destructor called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=( WrongCat const &rhs ) {


	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	std::cout << "Assignment WrongCat operator called" << std::endl;
	return *this;
}

void WrongCat::makeSound( void ) const {

	std::cout << "Woem" << std::endl;
	return ;
}
