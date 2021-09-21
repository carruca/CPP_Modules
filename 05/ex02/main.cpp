#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {

	ShrubberyCreationForm	home( "home" );
	RobotomyRequestForm		campus( "campus" );
	PresidentialPardonForm	escape( "escape" );
	Bureaucrat				bob( 12 );

	std::cout << home << std::endl;
	std::cout << campus << std::endl;
	std::cout << escape << std::endl;
	std::cout << bob << std::endl;
	try {

		bob.signForm( home );
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}
	try {

		home.execute( bob );
	}
	catch (Form::AlreadySignedFormException &e) {

		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}

	try {

		bob.signForm( campus );
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}
	try {

		campus.execute( bob );
	}
	catch (Form::AlreadySignedFormException &e) {

		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}

	try {

		bob.signForm( escape );
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}
	try {

		escape.execute( bob );
	}
	catch (Form::AlreadySignedFormException &e) {

		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}
	bob.executeForm( escape );
	return 0;
}
