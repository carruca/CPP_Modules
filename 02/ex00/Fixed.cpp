#include "Fixed.hpp"

int	Fixed::_fraction = 8;

Fixed::Fixed( void ) : _value(0) {

	return ;
}

Fixed::Fixed( const Fixed &copy ) : _value(copy._value) {

	return ;
}

Fixed::~Fixed( void ) {

	return ;
}

int	Fixed::getRawBits( void ) {

	return ;
}

void	Fixed::setRawBits( int const raw ) {

	return ;
}
