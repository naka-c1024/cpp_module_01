#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _club.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _club(club){}
