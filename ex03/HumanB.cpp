#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack()
{
	std::cout << this->_name
		<< " attacks with their "
		<< this->_weapon->getType() << std::endl;
		// << this->_weapon.getType() << std::endl; // ポインタ使わない場合
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	// this->_weapon = weapon; // ポインタ使わない場合
}

HumanB::HumanB(std::string name) : _name(name){}
