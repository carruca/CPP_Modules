#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	Character {

protected:

	AMateria			*inventory[3];
	std::string const	&name;

public:

	Character( void );
	Character( std::string const &name );
	Character( Character const &src );
	~Character( void );

	Character	&operator=( Character const &rhs );

	std::string const	&getName( void ) const;
	void				equip( AMateria *m );
	void				unequip( int idx );
	void				use( int idx, Character &target );
};

#endif
