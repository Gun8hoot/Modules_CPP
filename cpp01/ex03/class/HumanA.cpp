#include "class/HumanA.hpp"

HumanA::HumanA(std::string name; std::string &weapon)
{
  this->name = name;
  this->type = weapon;
}

void  HumanA::setWeapon(Weapon weapon)
{
  this->weapon = weapon.type
}

void  attack(void)
{
  std::cout << this->name << "attacks with their " << this->type << std::endl;
}
