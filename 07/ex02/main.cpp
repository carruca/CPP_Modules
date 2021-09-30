#include "Array.hpp"
#include <iostream>
#include <string>

typedef std::string		type_t;

void	leaks_check( void ) {

	system( "leaks array" );
}

int	main( void ) {

	Array<type_t>	a1;
	Array<type_t>	a2( 4 );

//	atexit( leaks_check );
	try {

		a2[0] = "hola";
		std::cout << "equal a2[0] = " << a2[ 0 ] << std::endl;
		a2[1] = "que";
		std::cout << "equal a2[1] = " << a2[ 1 ] << std::endl;
		a2[2] = "tal";
		std::cout << "equal a2[1] = " << a2[ 2 ] << std::endl;
		a2[3] = "estas";
		std::cout << "equal a2[3] = " << a2[ 3 ] << std::endl;
		std::cout << "equal a2[4] = a2[0]" << std::endl;
		a2[4] = a2[0];
	}
	catch ( std::exception &e ) {

		std::cout << e.what() << std::endl;
	}

	Array<type_t>a3 = a2;

	std::cout << "a2[0] = " << a2[ 0 ] << std::endl;
	std::cout << "equal a3[0] = " << a3[ 0 ] << std::endl;

	Array<type_t>	a4( a3 );

	std::cout << "copy a3 to a4" << std::endl;
	std::cout << "size of a3 = " << a3.size() << std::endl;
	std::cout << "size of a4 = " << a4.size() << std::endl;
	for ( std::size_t idx = 0; idx < a4.size(); idx++ )
		std::cout << "a4[" << idx << "] = " << a4[idx] << std::endl;
	return 0;
}
