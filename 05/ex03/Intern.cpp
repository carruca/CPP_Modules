#include "Intern.hpp"

Intern::Intern( void ){

	std::cout << "Default Intern constructor called" << std::endl;
	return ;
}

Intern::Intern( Intern const &src ) {

	std::cout << "Copy Intern constructor called" << std::endl;
	*this = src;
	return ;
}

Intern::~Intern( void ) {

	std::cout << "Default Intern destructor called" << std::endl;
	return ;
}

Intern	&Intern::operator=( Intern const &rhs ) {

	std::cout << "Assignment Intern operator called" << std::endl;
	if (this == &rhs)
		return *this;
	return *this;
}

Form	*Intern::makeForm( std::string name, std::string target ) {

	Form		*ret = NULL;
	std::string	nameForm[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	Form		*form[3] = { new ShrubberyCreationForm( target ), new RobotomyRequestForm( target ), new PresidentialPardonForm( target ) };

	for (int idx = 0; idx < 3; idx++) {

		if (nameForm[idx] == name) {

			std::cout << "Intern creates " << form[idx]->getName() << "." << std::endl;
			ret = form[idx];
		}
		else
			delete form[idx];
	}
	if (!ret)
		throw UnknownFormException();
	else
	return ret;
}

const char	*Intern::UnknownFormException::what() const throw() {

	return "Unknown form name.";
}
