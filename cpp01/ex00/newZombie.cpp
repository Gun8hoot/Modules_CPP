#include "class/Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zombie = NULL;
	zombie = new Zombie;
	if (!zombie)
	{
		std::cout << "[!] Failed to allocated memory !\n" << std::endl;
		return (NULL);
	}
	zombie->name = name;
	return (zombie);
}
