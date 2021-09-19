#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class	Bureaucrat {

private:

	std::string const	_name;

public:

	Bureaucrat( void );
	Bureaucrat( std::string const &name );
	Bureaucrat( Bureaucrat const &src );
	~Bureaucrat( void );

	Bureaucrat	&operator=( Bureaucrat const &rhs );

	std::string const	&getName( void ) const;
};

#endif
