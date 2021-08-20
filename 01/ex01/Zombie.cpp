#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) {

	return ;
}

Zombie::~Zombie( void ) {

	std::cout << this->_name << " really died" << std::endl;
	return ;
}

void	Zombie::setName( std::string name ) {

	this->_name = name;
	return ;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
