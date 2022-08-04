#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
public:
	const std::string& getType();
	void	setType(std::string type);

	Weapon(std::string str);
private:
	std::string	_type;
};

#endif // WEAPON_HPP
