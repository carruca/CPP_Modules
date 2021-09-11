#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {

	ClapTrap	ct1( "Bradley" );
	ClapTrap	ct2( "Tom" );
	ScavTrap	st1( "Luigi" );

	ct1.attack( ct2.getName() );
	ct1.takeDamage( 5 );
	ct1.beRepaired( 6 );
	st1.attack( ct1.getName() );
	st1.guardGate();
	return 0;
}
