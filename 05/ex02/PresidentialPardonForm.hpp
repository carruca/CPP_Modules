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
	~PresidentialPardonForm( void );

	void	actionExecute( void ) const;
};

#endif
