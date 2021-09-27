#include "Convert.hpp"

Convert::Convert( void ) {

	return ;
}

Convert::Convert( std::string input ) {

	bool	(Convert::*f[])( std::string ) = { &Convert::isChar, &Convert::isInt, &Convert::isFloat, &Convert::isDouble };

	for ( int idx = 0; idx < 4; idx++ ) {

		if ( (this->*f[idx])( input ) )
			break ;
	}
	return ;
}

Convert::Convert( Convert const &src ) {

	*this = src;
	return ;
}

Convert::~Convert( void ) {

	return ;
}

Convert	&Convert::operator=( Convert const &rhs ) {

	if ( this == &rhs )
		return *this;
	return *this;
}

char	Convert::getChar( void ) const {

	return this->_char;
}

int	Convert::getInt( void ) const {

	return this->_int;
}

float	Convert::getFloat( void ) const {

	return this->_float;
}

double	Convert::getDouble( void ) const {

	return this->_double;
}

bool	Convert::isChar( std::string input ) {

	if ( input.size() == 1 && std::isprint( input[0] ) && !std::isdigit( input[0] ) ) {

		this->displayChar( input[0] );
		return 1;
	}
	return 0;
}

bool	Convert::isInt( std::string input ) {

	try {

		if ( input.find( "." ) != std::string::npos )
			return 0;
		int	i = std::stoi( input );
		this->displayInt( i );
	}
	catch ( std::exception &e ) {

		return 0;
	}
	return 1;
}

bool	Convert::isFloat( std::string input ) {

	try {

		if ( input.find( "f" ) == std::string::npos )
			return 0;
		float	f = std::stof( input );
		this->displayFloat( f );
	}
	catch ( std::exception ) {

		return 0;
	}
	return 1;
}

bool	Convert::isDouble( std::string input ) {

	try {

		double	d = std::stod( input );
		this->displayDouble( d );
	}
	catch ( std::exception &e ) {

		return 0;
	}
	return 1;
}

void	Convert::displayChar( char c ) {

	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	return ;
}

void	Convert::displayInt( int i ) {

	if ( std::isprint( i ) )
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	else if ( i >= CHAR_MIN && i <= CHAR_MAX )
		std::cout << "char: No displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	return ;
}

void	Convert::displayFloat( float f ) {

	if ( std::isprint( static_cast<int>(f) ) )
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	else if ( f >= CHAR_MIN && f <= CHAR_MAX )
		std::cout << "char: No displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if ( f >= INT_MIN && f <= INT_MAX )
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if ( f - static_cast<int>(f) == 0 )
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if ( f - static_cast<int>(f) == 0 )
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	return ;
}

void	Convert::displayDouble( double d ) {

	if ( std::isprint( static_cast<int>(d) ) )
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else if ( d >= CHAR_MIN && d <= CHAR_MAX )
		std::cout << "char: No displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if ( d >= INT_MIN && d <= INT_MAX )
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if ( d - static_cast<int>(d) == 0 )
		std::cout << "float: " << d << ".0f" << std::endl;
	else
		std::cout << "float: " << d << "f" << std::endl;
	if ( d - static_cast<int>(d) == 0 )
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(d) << std::endl;
	return ;
}
