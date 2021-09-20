#include "Form.hpp"

Form::Form( void ) : _name( "piscine" ), _signed( 0 ), _signGrade( 150 ), _executeGrade( 150 ) {

	std::cout << "Default Form constructor called" << std::endl;
	return ;
}

Form::Form( std::string name, unsigned int signGrade, unsigned int executeGrade ) : _name( name ), _signed( 0 ), _signGrade( signGrade ), _executeGrade( executeGrade ) {

	std::cout << "Parameter Form constructor called" << std::endl;
	if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	else if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form::~Form( void ) {

	std::cout << "Default Form destructor called" << std::endl;
	return ;
}

Form	&Form::operator=( Form const &rhs ) {

	std::cout << "Assignment Form operator called" << std::endl;
	if (this == &rhs)
		return *this;
	return *this;
}

std::string const	&Form::getName( void ) const {

	return this->_name;
}

unsigned int	Form::getSignGrade( void ) const {

	return this->_signGrade;
}

unsigned int	Form::getExecuteGrade( void ) const {

	return this->_executeGrade;
}

void	Form::beSigned( Bureaucrat const &bureaucrat ) {

	if (bureaucrat.getGrade() > this->_signGrade) {

		std::cout << bureaucrat.getName() << " cannot sign " << this->getName() << " because ";
		throw Form::GradeTooLowException();
	}
	else {

		this->_signed = 1;
		std::cout << bureaucrat.getName() << " signs " << this->getName() << "." << std::endl;
	}
	return ;
}

const char	*Form::GradeTooHighException::what() const throw() {

	return "grade is too high.";
}

const char	*Form::GradeTooLowException::what() const throw() {

	return "grade is too low.";
}

std::ostream	&operator<<( std::ostream &o, Form const &rhs ) {

	o << rhs.getName() << " form has grade " << rhs.getSignGrade() << " to sign and grade " << rhs.getExecuteGrade() << " to execute.";
	return o;
}
