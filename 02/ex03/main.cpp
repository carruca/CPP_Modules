#include <iostream>
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int	main( void ) {

	Point const	a( 5.2f, 6.3f );
	Point const	b( 12.2f, 10.3f );
	Point const	c( 1.2f, 2.3f );
	Point const	point( 290.1f, 33.2f );

	if (bsp( a, b, c, point ))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is not inside the triangle" << std::endl;
	return 0;
}
