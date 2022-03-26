#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
public:
	void complain( std::string level );
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	void harl_else( void );
};


#endif // HARL_HPP
