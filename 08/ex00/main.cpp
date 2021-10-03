#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main( void ) {

	std::vector<int>			v1( 10, 3 );
	std::vector<int>::iterator	it;
	int							to_find;

	to_find = 2;

	try {

		it = easyfind( v1, to_find );
		std::cout << *it << " found" << std::endl;
	}
	catch ( std::exception &e ) {

		std::cout << to_find << " " << e.what() << std::endl;
	}

	return 0;
}
