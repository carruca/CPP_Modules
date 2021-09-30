#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <iostream>
# include <exception>

template< typename T >
class	Array {

public:

	Array( void ) : _head( nullptr ), _size( 0 ) {  }
	Array( unsigned int n ) : _size( n ) {
	
		this->_head = new T[ n ];
		return ;
	}
	Array( Array const &src ) {

		if ( this->_size != src.size() ) {

			this->_head = nullptr;
			this->_size = 0;
			this->_head = new T[ src.size() ];
			this->_size = src.size();
		}
		for ( std::size_t idx = 0; idx < this->_size; idx++ )
			this->_head[ idx ] = src[ idx ];
		*this = src;
		return ;
	}
	~Array( void ) {

		if (this->_size > 0 )
			delete [] this->_head;
		return ;
	}

	unsigned int		size( void ) const { return this->_size; }

	Array	&operator=( Array const &rhs ) {

		if ( this == &rhs )
			return *this;
		if ( this->_size != rhs.size() ) {

			if (this->_size > 0 )
				delete [] this->_head;
			this->_head = nullptr;
			this->_size = 0;
			this->_head = new T[ rhs.size() ];
			this->_size = rhs.size();
		}
		for ( std::size_t idx = 0; idx < this->_size; idx++ )
			this->_head[ idx ] = rhs[ idx ];
		return *this;
	}

	T			&operator[]( std::size_t idx ) {

			if (idx >= this->_size)
				throw std::exception();
			else
			return this->_head[ idx ];
	}
	T const		&operator[]( std::size_t idx ) const {

			if (idx >= this->_size)
				throw std::exception();
			else
				return this->_head[ idx ];
	}

private:

	T				*_head;
	unsigned int	_size;
};

#endif
