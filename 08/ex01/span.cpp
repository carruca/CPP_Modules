#include "Span.hpp"
#include <iostream>

Span::Span( unsigned int N ) : _size( N ) {

	return ;
}

Span::Span( Span const &src ) : _size( src.getSize() ), _vcontainer( src.getContainer() ) {

	*this = src;
	return ;
}

Span::~Span( void ) {

	return ;
}

Span	&Span::operator=( Span const &rhs ) {

	if ( this == &rhs )
		return *this;
	this->_size = rhs.getSize();
	this->_vcontainer = rhs.getContainer();
	return *this;
}

size_t const	&Span::getSize( void ) const {

	return this->_size;
}

std::vector<int> const	&Span::getContainer( void ) const {

	return this->_vcontainer;
}

void	Span::addNumber( int nb ) {

	if ( this->_size == this->_vcontainer.size() )
		throw FullSizeException();
	this->_vcontainer.push_back( nb );
	return ;
}

void	Span::addNumber( std::vector<int> v ) {

	if ( this->_size < this->_vcontainer.size() + v.size())
		throw FullSizeException();
	this->_vcontainer.insert( this->_vcontainer.end(), v.begin(), v.end() );
	return ;
}

unsigned int	Span::longestSpan( void ) {

	if ( this->_size < 2 )
		throw SizeTooLowException();
	return *std::max_element( this->_vcontainer.begin(), this->_vcontainer.end() )
			- *std::min_element( this->_vcontainer.begin(), this->_vcontainer.end() );
}

unsigned int	Span::shortestSpan( void ) {

	std::vector<int>	clone;
	unsigned int		shortest;
	unsigned int		lastest;

	if ( this->_size < 2 )
		throw SizeTooLowException();
	clone = this->_vcontainer;
	std::sort( clone.begin(), clone.end() );
	for ( std::vector<int>::const_iterator current = clone.begin(); current < clone.end() - 1; current++ ) {

		lastest = *( current + 1 ) - *current;
		shortest = ( shortest == 0 ) ? lastest : std::min( shortest, lastest );
	}
	return shortest;
}

const char	*Span::FullSizeException::what() const throw() {

	return "cannot add more numbers";
}

const char	*Span::SizeTooLowException::what() const throw() {

	return "too few numbers in the container";
}
