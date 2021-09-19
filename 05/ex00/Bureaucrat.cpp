#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "Default" ){

	std::cout << "Default Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string const &name ) : _name( name ) {

	std::cout << "Parameter Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) {

	std::cout << "Copy Bureaucrat constructor called" << std::endl;
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {

	std::cout << "Default Bureaucrat destructor called" << std::endl;
	return ;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &rhs ) {

	std::cout << "Assignment AMateria operator called" << std::endl;
	if (this == &rhs)
		return *this;
	return *this;
}

std::string const	&Bureaucrat::getName( void ) const {

	return this->_name;
}
