#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "shrubbery creation", 145, 137, "default" ) {

	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "shrubbery creation", 145, 137, target ) {

	std::cout << "Parameter ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src ) : Form( src.getName(), src.getSignGrade(), src.getExecuteGrade(), src.getTarget() ) {

	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

	std::cout << "Default ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::actionExecute( void ) const {

	std::ofstream	ofs( this->getTarget() + "_shrubbery", std::ofstream::out );

	for (int idx = 0; idx < 3; idx++) {
	
		ofs << std::endl;
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
	}
	return ;
}
