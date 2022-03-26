#include "Harl.hpp"
#include <iostream>

void Harl::complain( std::string level )
{
	std::string	arr_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t	i = 0;
	while ((arr_level[i] != level) && (i < 4))
		i++;

	void	(Harl::*funcptr)(void);

	switch (i)
	{
	case 0:
		funcptr = &Harl::debug;
		break;
	case 1:
		funcptr = &Harl::info;
		break;
	case 2:
		funcptr = &Harl::warning;
		break;
	case 3:
		funcptr = &Harl::error;
		break;
	default:
		funcptr = &Harl::harl_else;
		break;
	}
	(this->*funcptr)();
}

void Harl::debug( void )
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::harl_else( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}