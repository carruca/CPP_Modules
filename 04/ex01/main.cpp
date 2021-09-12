#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	leaks_check( void ) {

	system( "leaks brain" );
	return ;
}

int	main( void ) {

	int		N = 5;
	Animal	*ptr_array[N];

	
//	atexit( leaks_check );
	for (int i = 0; i < N; i++) {

		if (i % 2 == 0)
			ptr_array[i] = new Dog();
		else
			ptr_array[i] = new Cat();
	}

	for (int i = 0; i < N; i++)
		delete ptr_array[i];
	return 0;
}
