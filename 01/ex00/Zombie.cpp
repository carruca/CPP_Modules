#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {

	this->announce();
	return ;
}

Zombie::~Zombie( void ) {

	std::cout << this->_name << " finally died" << std::endl;
	return ;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
