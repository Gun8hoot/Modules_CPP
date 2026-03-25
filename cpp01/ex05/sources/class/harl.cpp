
#include "includes/class/harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levelType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*level_function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	Harl	*levelCall = this;

	for (std::size_t i = 0; i < 4; i++)
	{
		if (levelType[i].compare(level) == 0)
		{
			(levelCall->*level_function[i])();
		}
	}
}
