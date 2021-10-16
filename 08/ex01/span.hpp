#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iterator>

class	Span {

public:

	Span( unsigned int N );
	Span( Span const &src );
	~Span( void );

	Span	&operator=( Span const &rhs );

	size_t const			&getSize( void ) const;
	std::vector<int> const	&getContainer( void ) const;

	void	addNumber( int nb );
	void	addNumber( std::vector<int> v );

	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );

	class FullSizeException : public std::exception {

	public:

		virtual const char	*what() const throw();
	};

	class SizeTooLowException : public std::exception {

	public:

		virtual const char	*what() const throw();
	};

private:

	size_t				_size;
	std::vector<int>	_vcontainer;

	Span( void );
};

#endif
