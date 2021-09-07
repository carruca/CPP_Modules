#include <iostream>
#include "Fixed.hpp"

int	main( void ) {
/*
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
*/

	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

/*	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
*/
	std::cout << b << std::endl;

//	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
