#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>

template< typename T >
class	Array {

public:

	Array( void ) : _head( nullptr ), _size( 0 ) {  }
	Array( unsigned int n ) : _size( n ) {
	
		this->_head = new T[ n ];
		return ;
	}
	Array( Array const &src ) {

		this->_size = src.size();
		this->_head = new T[ this->_size ];
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
		if ( this->_size != rhs.size() ) {

			delete [] this->_head;
			this->_head = nullptr;
			this->_size = 0;
			this->_head = new T[ rhs.size() ];
			this->_size = rhs.size();
			return *this;
		}
	}

private:

	T				*_head;
	unsigned int	_size;
};

#endif
