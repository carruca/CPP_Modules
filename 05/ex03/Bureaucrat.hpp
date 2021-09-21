#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class	Form;

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

	void				signForm( Form &form );
	void				executeForm( Form const &form );

	class	GradeTooHighException : public std::exception {

	public:
		
		virtual const char	*what() const throw();
	};

	class	GradeTooLowException : public std::exception {

	public:

		virtual const char *what() const throw();
	};
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &rhs );

#endif
