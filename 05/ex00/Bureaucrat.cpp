#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "bob" ), _grade( 150 ) {

	std::cout << "Default Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( unsigned int grade ) : _name( "bob" ) {

	std::cout << "Parameter Bureaucrat constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
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

	std::cout << "Assignment Bureaucrat operator called" << std::endl;
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

	std::cout << "incrementGrade function called" << std::endl;
	if (this->_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	return ;
}

void	Bureaucrat::decrementGrade( void ) {

	std::cout << "decrementGrade function called" << std::endl;
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {

	return "grade is too high";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {

	return "grade is too low";
}

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &rhs ) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}
