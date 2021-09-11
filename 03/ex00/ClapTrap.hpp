#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap {

private:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:

	ClapTrap( void );
	ClapTrap( ClapTrap const &src );
	ClapTrap( std::string name );
	~ClapTrap( void );

	ClapTrap	&operator=( ClapTrap const &rhs );

	std::string		getName( void ) const;
	unsigned int	getHitPoints( void ) const;
	unsigned int	getEnergyPoints( void ) const;
	unsigned int	getAttackDamage( void ) const;

	void	attack( std::string const &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif
