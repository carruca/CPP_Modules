#include "Ice.hpp"
#include "Cure.hpp"

void	leaks_check( void ) {

	system( "leaks abstract" );
	return ;
}

int	main( void ) {

	AMateria	*m1 = new Cure();
	AMateria	*m2 = new Ice();

	std::cout << "First materia is " << m1->getType() << std::endl;
	std::cout << "Second materia is " << m2->getType() << std::endl;

	delete m1;
	delete m2;
	return 0;
}
