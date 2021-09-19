#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat	b( 4 );

	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;

	return 0;
}
