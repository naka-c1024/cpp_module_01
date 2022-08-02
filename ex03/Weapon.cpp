#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(std::string str) : _type(str){}

// Weapon::Weapon(){} // Bでポインタ使わない場合
