#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid arguments: ";
		std::cerr << "DEBUG, INFO, WARNING, ERROR, something else" << std::endl;
		return 0;
	}

	Harl	harl;
	harl.complain(argv[1]);

	return 0;
}
