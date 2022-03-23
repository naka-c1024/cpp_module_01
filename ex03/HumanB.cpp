#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _club->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	_club = &club;
}

HumanB::HumanB(std::string name) : _name(name){}
