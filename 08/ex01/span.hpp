#ifndef SPAN_HPP
# define SPAN_HPP

class	Span {

public:

	Span( void );
	Span( unsigned int N );
	Span( Span const &src );
	~Span( void );

	Span	&operator=( Span const &rhs );

	addNumber( unsigned int nb );

	shortestSpan( void ) const;
	longestSpan( void ) const;
};

#endif
