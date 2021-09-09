#include "Point.hpp"

Point::Point( void ) : _x( 0 ), _y( 0 ) {

	return ;
}

Point::Point( Point const &src ) {

	*this = src;
	return ;
}

Point::Point( float const x, float const y ) : _x( x ), _y( y ) {

	return ;
}

Point::~Point( void ) {

	return ;
}

Point	&Point::operator=( Point const &rhs ) {

	if (this == &rhs)
		return *this;
	return *this;
}

float	Point::getX( void ) const {

	return this->_x.toFloat();
}

float	Point::getY( void ) const {

	return this->_y.toFloat();
}
