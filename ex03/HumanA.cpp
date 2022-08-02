#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack()
{
	std::cout << this->_name
		<< " attacks with their "
		<< this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){}
