#include <iostream>
#include <string>
#include <fstream>

void	my_replace(std::string &line, std::string s1, std::string s2)
{
	std::size_t	pos;

	pos = line.find(s1);
	if (pos == std::string::npos)
		return;
	line.erase(pos, s1.length());
	line.insert(pos, s2);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Bad arguments" << std::endl;
		std::cerr << "format: ./losers <filename> <s1> <s2>" << std::endl;
		std::cerr << "example: ./losers testfile 42 24" << std::endl;
		return 0;
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream ifs(filename);
	if (ifs.fail())
	{
		std::cerr << "Failed to open file." << std::endl;
		return -1;
	}
	std::ofstream ofs(filename + ".replace");
	if (ofs.fail())
	{
		std::cerr << "Failed to open file." << std::endl;
		return -1;
	}

	std::string	line;
	while (std::getline(ifs, line))
	{
		my_replace(line, s1, s2);
		if (ifs.eof())
		{
			ofs << line;
			break;
		}
		ofs << line << std::endl;
	}
	return 0;
}
