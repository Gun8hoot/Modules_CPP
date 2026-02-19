#include "class/Zombie.hpp"

int main(void)
{
	Zombie *zombie1 = newZombie("goffy");
	Zombie *zombie2 = newZombie("aaa");
	Zombie *zombie3 = newZombie("oppp");

	randomChump("tmp1");
	randomChump("tmp2");
	(void)zombie1;
	(void)zombie2;
	(void)zombie3;
	return (0);
}
