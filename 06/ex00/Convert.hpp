#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <cctype>
# include <iostream>
# include <string>
# include <cmath>
# include <cfloat>

class	Convert {

public:

	typedef int	(Convert::*f_ptr)( std::string );

	Convert( std::string input );
	Convert( Convert const &src );
	~Convert( void );

	Convert	&operator=( Convert const &rhs );

	char	getChar( void ) const;
	int 	getInt( void ) const;
	float	getFloat( void ) const;
	double	getDouble( void ) const;

private:

	char			_char;
	int				_int;
	float			_float;
	double			_double;

	int	(Convert::*cmp[4])( std::string input );

	int		isChar( std::string input );
	int		isInt( std::string input );
	int		isFloat( std::string input );
	int		isDouble( std::string input );

	void	convertChar( char c );
	void	convertInt( int i );
	void	convertFloat( float f );
	void	convertDouble( double d );

	Convert( void );
};

std::ostream	&operator<<( std::ostream &o, Convert const &rhs );

#endif
