#include "Karen.hpp"
#include <iostream>

void Karen::complain( std::string level )
{
	std::string	arr_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*funcptr[5])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::karen_else};

	size_t	index = 0;
	while ((arr_level[index] != level) && (index < 4))
		index++;

	switch (index)
	{
	case 0:
		for (size_t i = 0; i < 4; i++)
			(this->*funcptr[i])();
		break;
	case 1:
		for (size_t i = 1; i < 4; i++)
			(this->*funcptr[i])();
		break;
	case 2:
		for (size_t i = 2; i < 4; i++)
			(this->*funcptr[i])();
		break;
	case 3:
		for (size_t i = 3; i < 4; i++)
			(this->*funcptr[i])();
		break;
	default:
		(this->*funcptr[4])();
		break;
	}
}

void Karen::debug( void )
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}
void Karen::info( void )
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!\n" << std::endl;
}
void Karen::warning( void )
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}
void Karen::error( void )
{
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void Karen::karen_else( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}