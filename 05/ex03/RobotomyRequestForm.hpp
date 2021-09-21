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
	~RobotomyRequestForm( void );

	void	actionExecute( void ) const;
};

#endif
