#include <iostream>
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int	main( void ) {

	Point const	a( 0, 0 );
	Point const	b( 20, 0 );
	Point const c( 10, 30 );

	Point const	point( 10, 15 );

	std::cout << "a:	x = " << a.getX() << "	, y = " << a.getY() << std::endl;
	std::cout << "b:	x = " << b.getX() << "	, y = " << b.getY() << std::endl;
	std::cout << "c:	x = " << c.getX() << "	, y = " << c.getY() << std::endl;
	std::cout << "point:	x = " << point.getX() << "	, y = " << point.getY() << std::endl;
	if (bsp( a, b, c, point ))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is not inside the triangle" << std::endl;
	return 0;
}
