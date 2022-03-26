#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid arguments" << std::endl;
		return 0;
	}

	Harl	harl;
	harl.complain(argv[1]);

	return 0;
}
