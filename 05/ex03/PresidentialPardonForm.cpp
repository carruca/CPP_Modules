#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "presidential pardon", 25, 5, "default" ) {

	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "presidential pardon", 25, 5, target ) {

	std::cout << "Parameter PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	std::cout << "Default PresidentialPardonForm destructor called" << std::endl;
	return ;
}

void	PresidentialPardonForm::actionExecute( void ) const {

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return ;
}
