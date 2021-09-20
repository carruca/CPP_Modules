#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <iostream>
# include <string>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	~ShrubberyCreationForm( void );
};

std::ostream	&operator<<( std::ostream &o, ShrubberyCreationForm const &rhs );

#endif
