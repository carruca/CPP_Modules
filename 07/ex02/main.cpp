#include "Array.hpp"
#include <iostream>

void	leaks_check( void ) {

	system( "leaks array" );
}

int	main( void ) {

	Array<int>	a1( 4 );

	atexit( leaks_check );
	return 0;
}
