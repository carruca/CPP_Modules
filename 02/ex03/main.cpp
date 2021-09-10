#include <iostream>
#include "Point.hpp"

bool	bsp( Point const &a, Point const &b, Point const &c, Point const &point );

int	main( void ) {

	Point const	a( 0, 0 );
	Point const	b( 20, 0 );
	Point const c( 10, 30 );
	Point const	point( 20, 30 );

	if (bsp( a, b, c, point ))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is not inside the triangle" << std::endl;
	return 0;
}
