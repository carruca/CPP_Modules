#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void ) {

	ShrubberyCreationForm	creation( "home" );
/*
	Bureaucrat	b( 150 );
	Form		f( "piscine", 1, 1 );

	std::cout << f << std::endl;

	try {

		Form	i( "piscine", 400, 12 );

		std::cout << i << std::endl;
	}
	catch (Form::GradeTooHighException &e) {

		std::cout << "form "<< e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << "form "<< e.what() << std::endl;
	}

	Form	j( "cursus", 150, 12 );

	std::cout << j << std::endl;
	try {

		b.signForm(j);
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}*/

/*	
	std::cout << "         &&& &&  & &&" << std::endl;
	std::cout << "    && &\\/&\\|& ()|/ @, &&" << std::endl;
	std::cout << "    &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	std::cout << "  &() &\\/&|()|/&\\/ '%\" & ()" << std::endl; 
	std::cout << " &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	std::cout << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	std::cout << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	std::cout << "            \\|||" << std::endl;
	std::cout << "             |||" << std::endl;
	std::cout << "             |||" << std::endl;
	std::cout << "             |||" << std::endl;
	std::cout << "       , -=-~  .-^- _" << std::endl;*/
	return 0;
}
