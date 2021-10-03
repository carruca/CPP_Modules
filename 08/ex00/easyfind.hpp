#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

class	OutOfRangeException : public std::exception {

public:

	virtual const char	*what() const throw() {

		return "not found";
	};
};

template< typename T >
typename T::iterator	easyfind( T &container, int to_find ) {

	typename T::iterator	it;

	it = std::find( container.begin(), container.end(), to_find );
	if ( it == container.end() )
		throw OutOfRangeException();
	return it;
}

#endif
