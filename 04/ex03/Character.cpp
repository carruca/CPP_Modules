#include "Character.hpp"

Character::Character( void ) : name( "Default" ){

	std::cout << "Default Character constructor called" << std::endl;
	return ;
}

Character::Character( std::string const &name ) : name( name ) {

	std::cout << "Parameter Character constructor called" << std::endl;
	return ;
}

Character::Character( Character const &src ) {

	*this = src;
	std::cout << "Copy Character constructor called" << std::endl;
	return ;
}

Character::~Character( void ) {

	std::cout << "Default Character destructor called" << std::endl;
	return ;
}

Character	&Character::operator=( Character const &rhs ) {

	std::cout << "Assignment AMateria operator called" << std::endl;
	if (this == &rhs)
		return *this;
	return *this;
}

std::string const	&Character::getName( void ) const {

	return this->name;
}

void	Character::equip( AMateria *m ) {

	for (int i = 0; i < 3; i++){

		if (this->inventory[i]){

			this->inventory[i] = m;
			break;
		}
	}
	return ;
}

void	Character::unequip( int idx ) {

	if (this->inventory[idx])
		this->inventory[idx] = 0;
	return ;
}

void	Character::use( int idx, ICharacter &target ) {

	if (this->inventory[idx])
		this->inventory[idx]->use( target );
	return ;
}
