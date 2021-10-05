#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	leaks_check( void ) {

	system( "leaks brain" );
	return ;
}

int	main( void ) {

	int		N = 2;
	Animal	*ptrArray[N];

	
	for (int i = 0; i < N; i++) {

		if (i % 2 == 0)
			ptrArray[i] = new Dog();
		else
			ptrArray[i] = new Cat();
	}

	for (int i = 0; i < N; i++)
		delete ptrArray[i];

//	atexit( leaks_check );
	return 0;
}
