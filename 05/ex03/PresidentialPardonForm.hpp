#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <fstream>
# include <iostream>
# include <string>
# include "Form.hpp"

class	PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const &src );
	~PresidentialPardonForm( void );

	PresidentialPardonForm	&operator=( PresidentialPardonForm const &rhs );

	void	actionExecute( void ) const;
};

#endif
