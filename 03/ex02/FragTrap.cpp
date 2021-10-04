#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {

	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const &src ) {

	std::cout << "Copy FragTrap constructor called" << std::endl;
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	*this = src;
	return ;
}

FragTrap::FragTrap( std::string name ) {

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name <<  " created" << std::endl;
	return ;
}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=( FragTrap const &rhs ) {

	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

void	FragTrap::highFivesGuys( void ) {

	std::cout << "FragTrap " << this->_name << " request a positive high five!" << std::endl;
	return ;
}
