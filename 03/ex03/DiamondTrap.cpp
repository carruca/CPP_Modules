#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {

	std::cout << "Default DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) : _name( src.getName() ) {

	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	ClapTrap::_name = src.getName() + "_clap_name";
	FragTrap::_hitPoints = src.getHitPoints();
	ScavTrap::_energyPoints = src.getEnergyPoints();
	FragTrap::_attackDamage = src.getAttackDamage();
	*this = src;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : _name( name ) {

	ClapTrap::_name = name + "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
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
	ClapTrap::_name = rhs.getName() + "_clap_name";
	FragTrap::_hitPoints = rhs.getHitPoints();
	ScavTrap::_energyPoints = rhs.getEnergyPoints();
	FragTrap::_attackDamage = rhs.getAttackDamage();
	return *this;
}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "I am DiamondTrap " << this->_name << " and ClapTrap " << ClapTrap::_name << std::endl;
	return ;
}
