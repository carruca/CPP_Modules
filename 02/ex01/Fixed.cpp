#include <iostream>
#include "Fixed.hpp"
#include <cmath>

int const	Fixed::_fraction = 8;

Fixed::Fixed( void ) : _rawBits( 0 ) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const raw ) : _rawBits( raw ) {

	return ;
}
//mal
Fixed::Fixed( float const raw ) : _rawBits( raw ) {

	return ;
}

Fixed::Fixed( const Fixed &src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=( Fixed const &rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {

	return this->_rawBits;
}

void	Fixed::setRawBits( int const raw ) {

	this->_rawBits = raw;
	return ;
}

float	Fixed::toFloat( void ) const {

	return (float)(this->_rawBits);
}

int	Fixed::toInt( void ) const {

	return (int)(this->_rawBits);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.getRawBits();
	return o;
}
