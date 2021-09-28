#include <iostream>
#include <cstdint>

struct Data {

	int		i;
};

uintptr_t	serialize( Data *ptr ) {

	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data	*deserialize( uintptr_t raw ) {

	Data	*dataPtr;

	dataPtr = reinterpret_cast<Data *>(raw);
	return dataPtr;
}

void	leaks_check( void ) {

	system( "leaks serial" );
	return ;
}

int	main( void ) {

	Data		*dataPtr = new Data;
	uintptr_t	raw;
	Data		*dataPtr2;

	std::cout << "Data ptr: " << dataPtr << std::endl;
	raw = serialize( dataPtr );
	std::cout << "Uint ptr: " << raw << std::endl;
	dataPtr2 = deserialize( raw );
	std::cout << "Data ptr: " << dataPtr2 << std::endl;

	delete dataPtr;

	return 0;
}
