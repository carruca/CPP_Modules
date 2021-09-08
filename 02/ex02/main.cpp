#include <iostream>
#include "Fixed.hpp"

int	main( void ) {

	Fixed		a( 2.2f );
	Fixed		c( 2.2f );

	if (a > c)
		std::cout << "a is greater than c" << std::endl;
	if (a < c)
		std::cout << "a is less than c" << std::endl;
	if (a >= c)
		std::cout << "a is greater than or equal to c" << std::endl;
	if (a <= c)
		std::cout << "a is less than or equal to c" << std::endl;
	if (a == c)
		std::cout << "a is equal to c" << std::endl;
	if (a != c)
		std::cout << "a is not equal to c" << std::endl;

	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const	d( Fixed( 5 ) + Fixed( 2 ) );
	Fixed const	e( Fixed( 5 ) - Fixed( 2 ) );
	Fixed const	f( Fixed( 5 ) / Fixed( 2 ) );

	std::cout << "multiplication value of b is " << b << std::endl;
	std::cout << "addition value of d is " << d << std::endl;
	std::cout << "subtraction value of e is " << e << std::endl;
	std::cout << "division value of f is " << f << std::endl;

	Fixed	g;

	std::cout << g << std::endl;
	std::cout << ++g << std::endl;
	std::cout << g << std::endl;
	std::cout << g++ << std::endl;
	std::cout << g << std::endl;

	Fixed	h;

	std::cout << "max(b, h) = " << Fixed::max( b, h ) << std::endl;
	std::cout << "min(h, b) = " << Fixed::min( b, h ) << std::endl;

	return 0;
}
