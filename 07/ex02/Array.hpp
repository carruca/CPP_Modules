#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>

template< typename T >
class	Array {

public:

	Array( void ) : _head( NULL ), _size( 0 ) {  }
	Array( unsigned int n ) : _size( n ) {
	
		this->_head = new T[ n ];
		return ;
	}
	Array( Array const &src ) {

		*this = src;
		return ;
	}
	~Array( void ) {
	
		delete [] this->_head;
		return ;
	}

	unsigned int	size( void ) const { return this->_size; }

	Array	&operator=( Array const &rhs ) {

		if ( this == &rhs )
			return *this;
		return *this;
	}

private:

	T				*_head;
	unsigned int	_size;
};

#endif
