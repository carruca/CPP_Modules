#include <string>
#include "iter.hpp"

int	main( void ) {

	int				a1[5] = { 42, 21, 13, 18, 3 };
	std::string		a2[3] = { "hola", "que", "tal" };
	float			a3[4] = { 34.2f, 3.098f, 1.2f, 0.53f };

	::iter<int>( a1, 5, ::display<int> );

	::iter<std::string>( a2, 3, ::display<std::string> );

	::iter<float>( a3, 4, ::display<float> );

	return 0;
}
