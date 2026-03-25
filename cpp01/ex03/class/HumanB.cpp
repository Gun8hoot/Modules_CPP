#include "class/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void  HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon.type
}

void  attack(void)
{
	if (this->weapon.empty())
		std::cout << this->name << " cant attack without a weapon" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->type << std::endl;
}
