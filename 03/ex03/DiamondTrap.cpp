#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {

	this->_name = "Default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) : _name( src.getName() ) {

	this->ClapTrap::_name = src.getName() + "_clap_name";
	this->FragTrap::_hitPoints = src.getHitPoints();
	this->ScavTrap::_energyPoints = src.getEnergyPoints();
	this->FragTrap::_attackDamage = src.getAttackDamage();
	*this = src;
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : _name( name ) {

	this->ClapTrap::_name = name + "_clap_name";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap " << this->_name <<  " created" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap " << this->_name << " destroyed" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs ) {

	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->ClapTrap::_name = rhs.getName() + "_clap_name";
	this->FragTrap::_hitPoints = rhs.getHitPoints();
	this->ScavTrap::_energyPoints = rhs.getEnergyPoints();
	this->FragTrap::_attackDamage = rhs.getAttackDamage();
	return *this;
}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "I am DiamondTrap " << this->_name << " and ClapTrap " << this->ClapTrap::_name << std::endl;
	return ;
}
