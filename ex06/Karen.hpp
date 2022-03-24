#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>

class Karen
{
public:
	void complain( std::string level );
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	void karen_else( void );
};


#endif // KAREN_HPP
