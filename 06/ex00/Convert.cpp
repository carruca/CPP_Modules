#include "Convert.hpp"

Convert::Convert( void ) {

	return ;
}

Convert::Convert( std::string input ) {

	this->cmp[0] = &Convert::isChar;
	this->cmp[1] = &Convert::isInt;
	this->cmp[2] = &Convert::isFloat;
	this->cmp[3] = &Convert::isDouble;

	for ( int idx = 0; idx < 4; idx++ )
		if ( (this->*cmp[idx])( input ) )
			break ;
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

int	Convert::isChar( std::string input ) {

	if ( input.size() == 1 && std::isprint( input[0] ) && !std::isdigit( input[0] ) ) {

		this->convertChar( input[0] );
		return 1;
	}
	return 0;
}

int	Convert::isInt( std::string input ) {

	std::string::iterator	it = input.begin();

	if ( *it == '-' || *it == '+' )
		it++;
	while ( it != input.end() ) {

		if ( !std::isdigit(*it) )
			return 0;
		it++;
	}
	this->convertInt( std::stoi( input ) );
	return 1;
}

int	Convert::isFloat( std::string input ) {

	std::string::iterator	it		= input.begin();
	bool					point	= 0;

	if ( *it == '-' || *it == '+' )
		it++;
	while ( it != input.end() ) {

		if ( *it == '.' )
			point ^= 1;
		else if ( point && *it == 'f' && ++it == input.end() ) {

			this->convertFloat( std::stof( input ) );
			return 1;
		}
		else if ( !isdigit(*it) )
			break ;
		it++;
	}
	return 0;
}

int	Convert::isDouble( std::string input ) {

	std::string::iterator	it		= input.begin();
	bool					point	= 0;

	if ( *it == '-' || *it == '+' )
		it++;
	while ( it != input.end() ) {

		if ( *it == '.' )
			point ^= 1;
		else if ( point && it + 1 == input.end() ) {

			this->convertFloat( std::stod( input ) );
			return 1;
		}
		else if ( !isdigit(*it) )
			break ;
		it++;
	}
	return 0;
}

void	Convert::convertChar( char c ) {

	this->_char = c;
	this->_int = static_cast<int>(c);
	this->_float = static_cast<float>(c);
	this->_double = static_cast<double>(c);
	return ;
}

void	Convert::convertInt( int i ) {

	this->_char = static_cast<char>(i);
	this->_int = i;
	this->_float = static_cast<float>(i);
	this->_double = static_cast<double>(i);
	return ;
}

void	Convert::convertFloat( float f ) {

	if ( f >= CHAR_MIN && f <= CHAR_MAX )
		this->_char = static_cast<char>(f);
	if ( f >= INT_MIN && f <= INT_MAX )
		this->_int = static_cast<int>(f);
	this->_float = f;
	this->_double = static_cast<double>(f);
	return ;
}

void	Convert::convertDouble( double d ) {

	if ( d >= CHAR_MIN && d <= CHAR_MAX )
		this->_char = static_cast<char>(d);
	if ( d >= INT_MIN && d <= INT_MAX )
		this->_int = static_cast<char>(d);
	if ( d >= FLT_MIN && d <= FLT_MAX )
		this->_float = static_cast<float>(d);
	this->_double = d;
	return ;
}

std::ostream	&operator<<( std::ostream &o, Convert const &rhs ) {

	if ( std::isprint( rhs.getChar() ) )
		o << "char: " << rhs.getChar() << std::endl;
	else if ( isnan( rhs.getFloat() ) || isinf( rhs.getFloat() )
		|| rhs.getFloat() < CHAR_MIN || rhs.getFloat() > CHAR_MAX )
		o << "char: impossible" << std::endl;
	else
		o << "char: No displayable" << std::endl;

	if ( isnan( rhs.getFloat() ) || isinf( rhs.getFloat() )
		|| rhs.getFloat() < INT_MIN || rhs.getFloat() > INT_MAX )
		o << "int: impossible" << std::endl;
	else
		o << "int: " << rhs.getInt() << std::endl;
	if ( rhs.getFloat() - static_cast<int>(rhs.getFloat()) != 0 )
		o << "float: " << rhs.getFloat() << "f" << std::endl;
	else
		o << "float: " << rhs.getFloat() << ".0f" << std::endl;

	if ( rhs.getDouble() - static_cast<int>(rhs.getDouble()) != 0 )
		o << "double: " << rhs.getDouble();
	else
		o << "double: " << rhs.getDouble() << ".0";
	return o;
}
