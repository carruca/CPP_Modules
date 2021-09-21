#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	leaks_check( void ) {

	system("leaks intern");
}

int	main( void ) {

	Intern					jim;
	Form					*pForm;

	try {

		pForm = jim.makeForm( "robotomy request", "Bender" );

		delete pForm;
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}
