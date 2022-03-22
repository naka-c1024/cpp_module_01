#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *new_zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		new_zombie[i].set_name(name);
	}

	return (new_zombie);
}
