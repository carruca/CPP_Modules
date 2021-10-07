#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <fstream>
# include <iostream>
# include <string>
# include "Form.hpp"

class	RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const &src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm		&operator=( RobotomyRequestForm const &rhs );

	void	actionExecute( void ) const;
};

#endif
