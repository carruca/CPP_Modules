#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void ) {

	int		randomNb;

	srand( time( NULL ) );
	randomNb = rand() % 3;
	if ( randomNb == 0 )
		return new A;
	else if ( randomNb == 1 )
		return new B;
	else
		return new C;
}

void	identify( Base *p ) {

	A	*aPtr = dynamic_cast<A *>(p);
	B	*bPtr = dynamic_cast<B *>(p);
	C	*cPtr = dynamic_cast<C *>(p);

	if ( aPtr )
		std::cout << "A" << std::endl;
	else if ( bPtr )
		std::cout << "B" << std::endl;
	else if ( cPtr )
		std::cout << "C" << std::endl;
	return ;
}

void	identify( Base &p ) {

	try {

		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch ( std::bad_cast &e ) {}
	try {

		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch ( std::bad_cast &e ) {}
	try {

		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch ( std::bad_cast &e ) {}
	return ;
}

void	leaks_check( void ) {

	system( "leaks identify" );
	return ;
}

int	main( void ) {

	Base	*ptr;

	ptr = generate();

	identify( ptr );

	identify( *ptr );

	delete ptr;

	return 0;
}
