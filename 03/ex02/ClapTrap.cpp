#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "Default" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {

	std::cout << "Default ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {

	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src ) : _name( src.getName() ), _hitPoints( src.getHitPoints() ), _energyPoints( src.getEnergyPoints() ), _attackDamage( src.getAttackDamage() ) {

	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs ) {

	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

std::string	ClapTrap::getName( void ) const {

	return this->_name;
}

unsigned int	ClapTrap::getHitPoints( void ) const {

	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {

	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage( void ) const {

	return this->_attackDamage;
}

void	ClapTrap::attack( std::string const &target ) {

	std::cout << "ClapTrap " << this->_name;
	std::cout << " attack " << target;
	std::cout << ", causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << "ClapTrap " << this->_name;
	std::cout << " take " << amount;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << "ClapTrap " << this->_name;
	std::cout << " heal " << amount;
	std::cout << " points of energy!" << std::endl;
}
