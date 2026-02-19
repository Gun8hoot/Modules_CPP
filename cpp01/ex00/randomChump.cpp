#include "class/Zombie.hpp"

void randomChump(std::string name)
{
	Zombie *zombie = NULL;
	zombie = new Zombie;
	if (!zombie)
	{
		std::cout << "[!] Failed to allocated memory !\n" << std::endl;
		return ;
	}
	zombie->name = name;
	zombie->announce();
}
