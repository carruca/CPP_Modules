#include <string>
#include "iter.hpp"

int	main( void ) {

	int				a1[5] = { 42, 21, 13, 18, 3 };
	std::string		a2[3] = { "hola", "que", "tal" };

	::iter<int>( a1, 5, ::print<int> );

	::iter<std::string>( a2, 3, ::print<std::string> );

	return 0;
}
