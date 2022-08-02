#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
public:
	void	attack();
	HumanA(std::string name, Weapon &club);
private:
	std::string	_name;
	Weapon		&_weapon;
};


#endif // HUMANA_HPP
