#include <iostream>
#include <string>
#include <fstream>

int	err_msg(void)
{
	std::cerr << "Bad arguments" << std::endl;
	std::cerr << "format: ./losers <filename> <s1> <s2>" << std::endl;
	std::cerr << "example: ./losers testfile 42 24" << std::endl;
	return 0;
}

int	fstream_fail_msg(void)
{
	std::cerr << "Failed to open file." << std::endl;
	return -1;
}

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
		return err_msg();

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream ifs(filename);
	if (ifs.fail())
		return fstream_fail_msg();
	std::ofstream ofs(filename + ".replace");
	if (ofs.fail())
		return fstream_fail_msg();

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
