#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {

public:

	Fixed( void );
	Fixed( int const raw );
	Fixed( float const raw );
	Fixed( Fixed const &src );
	~Fixed( void );

	Fixed	&operator=( Fixed const &rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator>( Fixed const &rhs ) const;
	bool	operator<( Fixed const &rhs ) const;
	bool	operator>=( Fixed const &rhs ) const;
	bool	operator<=( Fixed const &rhs ) const;
	bool	operator==( Fixed const &rhs ) const;
	bool	operator!=( Fixed const &rhs ) const;

	Fixed	operator+( Fixed const &rhs ) const;
	Fixed	operator-( Fixed const &rhs ) const;
	Fixed	operator*( Fixed const &rhs ) const;
	Fixed	operator/( Fixed const &rhs ) const;

private:

	int		_rawBits;

	static int const	_fractBits;

};

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs );

#endif
