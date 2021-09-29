#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

template< typename T >
void	iter( T	*p, std::size_t lenght, void (*f)( T const & ) ) {

	for ( std::size_t i = 0; i < lenght; i++ ) {

		f( p[i] );
	}
	return ;
}

template< typename T >
void	display( T const &target ) {

	std::cout << target << std::endl;
	return ;
}

#endif
