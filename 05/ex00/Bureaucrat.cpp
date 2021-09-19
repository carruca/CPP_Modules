#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "bob" ), _grade( 150 ) {

	std::cout << "Default Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( unsigned int grade ) : _name( "bob" ) {

	std::cout << "Parameter Bureaucrat constructor called" << std::endl;
	this->_grade = grade;
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

unsigned int	Bureaucrat::getGrade( void ) const {

	return this->_grade;
}

void	Bureaucrat::incrementGrade( void ) {

	this->_grade--;
	return ;
}

void	Bureaucrat::decrementGrade( void ) {

	this->_grade++;
	return ;
}

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &rhs ) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}
