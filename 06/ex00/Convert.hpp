#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <cctype>
# include <iostream>
# include <string>
# include <cmath>
# include <cfloat>

class	Convert {

public:

	Convert( std::string input );
	Convert( Convert const &src );
	~Convert( void );

	Convert	&operator=( Convert const &rhs );

private:

	bool	isChar( std::string input );
	bool	isInt( std::string input );
	bool	isFloat( std::string input );
	bool	isDouble( std::string input );

	void	displayChar( char c );
	void	displayInt( int i );
	void	displayFloat( float f );
	void	displayDouble( double d );

	Convert( void );
};

#endif
