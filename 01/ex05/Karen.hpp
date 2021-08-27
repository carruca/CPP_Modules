#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class	Comment	{

public:

	Comment( std::string name, void (*f)() );
	~Comment( void );

private:

	std::string	_name;
	void		(*f)();

	Comment( void );
};

class	Karen {

public:

	Karen( void );
	~Karen( void );

	void	complain( std::string level );
	
private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif
