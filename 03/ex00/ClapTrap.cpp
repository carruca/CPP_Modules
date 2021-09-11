#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {

	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {

	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src ) {

	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void ) {

	return ;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs ) {

	if (this == &rhs)
		return *this;
	_name = rhs.getName();
	_hitPoints = rhs.getHitPoints();
	_energyPoints = rhs.getEnergyPoints();
	_attackDamage = rhs.getAttackDamage();
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
