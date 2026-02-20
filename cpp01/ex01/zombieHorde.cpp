#include "class/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	(void)name;
	Zombie *horde = new Zombie(name);
	return (horde);
} 
