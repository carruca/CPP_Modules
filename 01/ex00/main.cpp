#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main( void ) {

	Zombie	*new_zombie;

	new_zombie = newZombie( "bob" );
	randomChump( "jim" );

	delete new_zombie;

	return 0;
}
