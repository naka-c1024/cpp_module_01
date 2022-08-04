#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack()
{
	std::cout << this->_name
		<< " attacks with their "
		<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	// this->_weapon = weapon; // this->_weaponの型が参照じゃなければ参照は代入されない, そもそも参照は代入はできず初期化でしか使えない
}

HumanB::HumanB(std::string name) : _name(name){}
