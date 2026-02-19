#include "class/Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie(void)
{
	std::cout << this->name << " will be kill !" << std::endl;
	delete this;
}
