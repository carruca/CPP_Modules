#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap	clap( "Bradley" );
	ClapTrap	trap( "Tom" );

	clap.attack( trap.getName() );
	clap.takeDamage( 5 );
	clap.beRepaired( 6 );
	return 0;
}
