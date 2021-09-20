#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "shrubbery creation", 145, 137 ) {

	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "shrubbery creation", 145, 137 ) {

	std::cout << "Parameter ShrubberyCreationForm constructor called" << std::endl;

	std::ofstream	ofs( target + "_shrubbery", std::ofstream::out );

	ofs << "         &&& &&  & &&" << std::endl;
	ofs << "    && &\\/&\\|& ()|/ @, &&" << std::endl;
	ofs << "    &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	ofs << "  &() &\\/&|()|/&\\/ '%\" & ()" << std::endl; 
	ofs << " &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	ofs << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	ofs << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	ofs << "	    	\\|||" << std::endl;
	ofs << "             |||" << std::endl;
	ofs << "             |||" << std::endl;
	ofs << "             |||" << std::endl;
	ofs << "       , -=-~  .-^- _" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

	std::cout << "Default ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

std::ostream	&operator<<( std::ostream &o, ShrubberyCreationForm const &rhs ) {

	o << rhs.Form::getName() << " form has grade " << rhs.Form::getSignGrade() << " to sign and grade " << rhs.Form::getExecuteGrade() << " to execute.";
	return o;
}
