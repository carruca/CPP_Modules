#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	std::cout << "Default ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const &src ) : ClapTrap( src ) {

	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::ScavTrap( std::string name ) {

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name <<  " created" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs ) {

	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

void	ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap " << this->_name << " enter in Gate keeper mode!" << std::endl;
	return ;
}
