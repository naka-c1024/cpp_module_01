#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	void	announce( void );
	void	set_name(std::string name);

	~Zombie();
private:
	std::string	_name;
};

#endif // ZOMBIE_HPP
