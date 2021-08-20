#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main( void ) {

	int		N				= 7;
	Zombie	*zombie_horde	= zombieHorde( N, "bob" );

	for (int index = 0; index < N; index++)
		zombie_horde[index].announce();

	delete [] zombie_horde;

	return 0;
}
