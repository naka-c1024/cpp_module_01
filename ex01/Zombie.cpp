#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": bye!" << std::endl;
}