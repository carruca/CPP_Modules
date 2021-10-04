#include "span.hpp"

Span::Span( unsigned int N ) _size( N ) {

	return ;
}

Span::Span( Span const &src ) {

	*this = src;
	return ;
}

Span::~Span( void ) {

	return ;
}

Span	&Span::operator=( Span const &rhs ) {

	if ( this == &rhs )
		return *this;
	return *this;
}

void	Span::addNumber( unsigned int nb ) {

	if ( this->_size == this->_container.size() )
		throw ;	
	this->_container.push_back( nb );
	return ;
}

const char	*Span::FullContainerException::what() const throw() {

	return "cannot add more numbers";
}
