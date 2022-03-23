#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
	void	attack();
	void	setWeapon(Weapon &club);
	HumanB(std::string name);
private:
	std::string	_name;
	Weapon	*_club;
};

#endif // HUMANB_HPP
