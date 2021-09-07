#include <iostream>
#include "Fixed.hpp"
#include <cmath>

int const	Fixed::_fractBits = 8;

Fixed::Fixed( void ) : _rawBits( 0 ) {

	return ;
}

Fixed::Fixed( int const raw ) : _rawBits( raw << Fixed::_fractBits ) {

	return ;
}

Fixed::Fixed( float const raw ) : _rawBits( (int)(roundf( raw * (1 << Fixed::_fractBits) )) ) {

	return ;
}

Fixed::Fixed( const Fixed &src ) {

	*this = src;
	return ;
}

Fixed::~Fixed( void ) {

	return ;
}

Fixed	&Fixed::operator=( Fixed const &rhs ) {

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

	return (float)this->_rawBits / (float)(1 << Fixed::_fractBits);
}

int	Fixed::toInt( void ) const {

	return this->_rawBits >> Fixed::_fractBits;
}

bool	Fixed::operator>( Fixed const &rhs ) const {

	if (this->_rawBits > rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator<( Fixed const &rhs ) const {

	if (this->_rawBits < rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator>=( Fixed const &rhs ) const {

	if (this->_rawBits >= rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator<=( Fixed const &rhs ) const {

	if (this->_rawBits <= rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator==( Fixed const &rhs ) const {

	if (this->_rawBits == rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator!=( Fixed const &rhs ) const {

	if (this->_rawBits != rhs.getRawBits())
		return 1;
	return 0;
}

Fixed	Fixed::operator+( Fixed const &rhs ) const {

	Fixed addition( this->_rawBits + rhs.getRawBits() );

	return addition;
}

Fixed	Fixed::operator-( Fixed const &rhs ) const {

	Fixed	subtraction( this->_rawBits - rhs.getRawBits() );

	return subtraction;
}

Fixed	Fixed::operator*( Fixed const &rhs ) const {

	Fixed	multiplication( this->_rawBits * rhs.getRawBits() );

	return multiplication;
}

Fixed	Fixed::operator/( Fixed const &rhs ) const {

	Fixed	division( this->_rawBits / rhs.getRawBits() );

	return division;
}

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.toFloat();
	return o;
}
