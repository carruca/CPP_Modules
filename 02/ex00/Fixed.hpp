#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {

public:

	Fixed( void );
	Fixed( const Fixed &copy );
	~Fixed( void );
	Fixed	&operator= ( const Fixed &fixed); 

private:

	int					_value;
	static const int	_fraction;

};

#endif
