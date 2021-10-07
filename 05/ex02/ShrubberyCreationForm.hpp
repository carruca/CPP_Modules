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
	ShrubberyCreationForm( ShrubberyCreationForm const &src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &rhs );

	void	actionExecute( void ) const;
};

#endif
