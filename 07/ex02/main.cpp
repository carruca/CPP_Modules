#include "Array.hpp"
#include <iostream>

void	leaks_check( void ) {

	system( "leaks array" );
}

int	main( void ) {

	Array<int>	a1;
	Array<int>	a2( 4 );


//	atexit( leaks_check );
	try {

		a2[0] = 3;
		a2[4] = 23;
	}
	catch (std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "a2[0] = " << a2[ 0 ] << std::endl;

	a1 = a2;

	std::cout << "a1[0] = " << a1[ 0 ] << std::endl;

	Array<int>	a3( a1 );

	std::cout << "a3.size() = " << a3.size() << std::endl;
	return 0;
}
