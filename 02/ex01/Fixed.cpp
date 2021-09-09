#include <iostream>
#include "Fixed.hpp"
#include <cmath>

int const	Fixed::_fractBits = 8;

Fixed::Fixed( void ) : _rawBits( 0 ) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const raw ) : _rawBits( raw << Fixed::_fractBits ) {

	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const raw ) : _rawBits( (int)(roundf( raw * (1 << Fixed::_fractBits) )) ) {

	std::cout << "Float constructor called" << std::endl;
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
	if (this == &rhs)
		return *this;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
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

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.toFloat();
	return o;
}
