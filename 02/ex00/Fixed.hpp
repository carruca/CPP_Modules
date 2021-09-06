#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {

public:

	Fixed( void );
	Fixed( Fixed const &copy );
	~Fixed( void );
	Fixed	&operator= ( Fixed const &fixed);

	int		getRawBits( void );
	void	setRawBits( int const raw );

private:

	int					_value;
	static int const	_fraction;

};

#endif
