#include "Karen.hpp"
#include <iostream>

void Karen::complain( std::string level )
{
	std::string	arr_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t	i = 0;
	while ((arr_level[i] != level) && (i < 4))
		i++;

	void	(Karen::*funcptr)(void);

	switch (i)
	{
	case 0:
		funcptr = &Karen::debug;
		break;
	case 1:
		funcptr = &Karen::info;
		break;
	case 2:
		funcptr = &Karen::warning;
		break;
	case 3:
		funcptr = &Karen::error;
		break;
	default:
		funcptr = &Karen::karen_else;
		break;
	}
	(this->*funcptr)();
}

void Karen::debug( void )
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Karen::info( void )
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Karen::warning( void )
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Karen::error( void )
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::karen_else( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}