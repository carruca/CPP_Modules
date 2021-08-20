#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>
# include "Weapon.hpp"

class	HumanA {

public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void	attack( void ) const;

private:

	Weapon		&_weapon;
	std::string	_name;

	HumanA( void );

};

#endif
