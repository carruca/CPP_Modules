#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat	b( 150 );

	try {

		Bureaucrat	a( 200 );
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		
		std::cout << e.what() << std::endl;
	}

	std::cout << b << std::endl;
	try {

		b.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e) {

		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;
	try {

		b.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e) {

		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;

	return 0;
}
