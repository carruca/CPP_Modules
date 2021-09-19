#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class	Bureaucrat {

private:

	std::string const	_name;
	unsigned int		_grade;

public:

	Bureaucrat( void );
	Bureaucrat( unsigned int grade );
	Bureaucrat( Bureaucrat const &src );
	~Bureaucrat( void );

	Bureaucrat	&operator=( Bureaucrat const &rhs );

	std::string const	&getName( void ) const;
	unsigned int		getGrade( void ) const;

	void				incrementGrade( void );
	void				decrementGrade( void );
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &rhs );

#endif
