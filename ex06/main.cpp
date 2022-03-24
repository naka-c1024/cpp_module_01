#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid arguments" << std::endl;
		return 0;
	}

	Karen	karen;
	karen.complain(argv[1]);

	return 0;
}
