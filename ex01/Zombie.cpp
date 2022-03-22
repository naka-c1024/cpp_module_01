#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << ": bye!" << std::endl;
}