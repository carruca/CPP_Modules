#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	const WrongAnimal	*gamma = new WrongAnimal();
	const WrongAnimal	*k = new WrongCat();

	std::cout << meta->getType() << " type is an animal" << std::endl;
	std::cout << j->getType() << " type is an animal" << std::endl;
	std::cout << i->getType() << " type is an animal" << std::endl;

	std::cout << gamma->getType() << " type is an wrong animal" << std::endl;
	std::cout << k->getType() << " type is an wrong animal" << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();

	k->makeSound();
	gamma->makeSound();

	delete i;
	delete j;
	delete meta;
	return 0;
}
