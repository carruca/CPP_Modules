#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {

	ClapTrap	clap1( "Brick" );
	ClapTrap	clap2( "Lilith" );

	ScavTrap	scav1( "Mordecai" );

	FragTrap	frag1( "Roland" );

	DiamondTrap	diamond( "Axton" );

	clap1.attack( clap2.getName() );
	clap1.takeDamage( 5 );
	clap1.beRepaired( 6 );
	scav1.attack( clap1.getName() );
	scav1.guardGate();
	frag1.attack( scav1.getName() );
	frag1.highFivesGuys();
	diamond.ScavTrap::attack( frag1.getName() );
	diamond.whoAmI();
	return 0;
}
