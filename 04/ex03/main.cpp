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
/*
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}*/
