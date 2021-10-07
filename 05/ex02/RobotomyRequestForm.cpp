#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "robotomy request", 72, 45, "deafult" ) {

	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( "robotomy request", 72, 45, target ) {

	std::cout << "Parameter RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src ) : Form( src.getName(), src.getSignGrade(), src.getExecuteGrade(), src.getTarget() ) {

	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

	std::cout << "Default RobotomyRequestForm destructor called" << std::endl;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs ) {

	std::cout << "Assignment RobotomyRequestForm operator called" << std::endl;
	if ( this == &rhs )
		return *this;
	return *this;
}

void	RobotomyRequestForm::actionExecute( void ) const {

	srand(time(NULL));
	int	randomNb = rand() % 2;

	std::cout << "rizzz..." << std::endl;
	if (randomNb)
		std::cout << this->getTarget() << " has been robotomied successfully." << std::endl;
	else
		std::cout << "robotomy request to " << this->getTarget() << " has failed." << std::endl;
	return ;
}
