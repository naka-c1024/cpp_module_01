#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void)
{
	std::cout << "-- heap memory --" << std::endl;
	Zombie	*heap_zombie = newZombie("TAROU");
	heap_zombie->announce();
	delete	heap_zombie;

	std::cout << "-- stack memory --" << std::endl;
	randomChump("HANAKO");

	return 0;
}
