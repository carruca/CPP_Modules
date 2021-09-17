#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {

	std::cout << "Default MateriaSource constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource( MateriaSource const &src ) {

	std::cout << "Copy MateriaSource constructor called" << std::endl;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource( void ) {

	std::cout << "Default MateriaSource destructor called" << std::endl;
	return ;
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &rhs ) {

	std::cout << "Assignment AMateria operator called" << std::endl;
	if (this == &rhs)
		return *this;
	return *this;
}

void	MateriaSource::learnMateria( AMateria *src ) {

	return ;
}

AMateria	*MateriaSource::createMateria( std::string const &type ) {

	return ;
}
