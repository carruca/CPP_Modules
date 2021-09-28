#include <iostream>
#include "whatever.hpp"

int	main( void ) {

	int		a	= 4;
	int		b	= 2;
	float	c	= 42.06;
	float	d	= 34.02;

	std::cout << "Max number between " << a << " and " << b << " is " <<  max<int>( a, b ) << std::endl;

	std::cout << "Min number between " << a << " and " << b << " is " <<  min<int>( a, b ) << std::endl;

	std::cout << "Swap values " << a << " and " << b << std::endl;

	swap<int>( a , b );

	std::cout << "Now values are " << a << " and " << b << std::endl;

	std::cout << "Max number between " << c << " and " << d << " is " << max<float>( c, d ) << std::endl;

	std::cout << "Min number between " << c << " and " << d << " is " << min<float>( c, d ) << std::endl;

	std::cout << "Swap values " << c << " and " << d << std::endl;

	swap<float>( c , d );

	std::cout << "Now values are " << c << " and " << d << std::endl;

	return 0;
}
