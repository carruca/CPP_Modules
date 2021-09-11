#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {

	ClapTrap	ct1( "Brick" );
	ClapTrap	ct2( "Lilith" );

	ScavTrap	st1( "Mordecai" );

	FragTrap	ft1( "Roland" );

	ct1.attack( ct2.getName() );
	ct1.takeDamage( 5 );
	ct1.beRepaired( 6 );
	st1.attack( ct1.getName() );
	st1.guardGate();
	ft1.attack( st1.getName() );
	ft1.highFivesGuys();
	return 0;
}
