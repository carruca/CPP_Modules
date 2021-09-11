#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap	clap( "Brick" );
	ClapTrap	trap( "Lilith" );

	clap.attack( trap.getName() );
	clap.takeDamage( 5 );
	clap.beRepaired( 6 );
	return 0;
}
