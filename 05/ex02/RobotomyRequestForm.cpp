#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "robotomy request", 72, 45) {

	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( target, 72, 45 ) {

	std::cout << "Parameter RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

	std::cout << "Default RobotomyRequestForm destructor called" << std::endl;
	return ;
}

void	RobotomyRequestForm::actionExecute( void ) const {

	std::cout << "rizzz" << std::endl;
	std::cout << this->getName() << " has been robotomied successfully 50\% of the time" << std::endl;
	return ;
}
