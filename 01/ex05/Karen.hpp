#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class	Karen {

public:

	Karen( void );
	~Karen( void );

	void	complain( std::string level );
	
private:

	void	(Karen::*f[4])( void );

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif
