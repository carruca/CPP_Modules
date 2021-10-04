#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class	Span {

public:

	Span( unsigned int N );
	Span( Span const &src );
	~Span( void );

	Span	&operator=( Span const &rhs );

	void	addNumber( unsigned int nb );

//	int const	&shortestSpan( void ) const;
//	int	const	&longestSpan( void ) const;

	class FullContainerException : public std::exception {

	public:

		virtual const char	*what() const throw();
	};

private:

	unsigned int	_size;
	vector<int>		_container;

	Span( void );
};

#endif
