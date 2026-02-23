#include "class/Weapon.hpp"

Weapon::Weapon(std::string type)
{
  this->type = type;
}

std::string &Weapon::getType(void)
{
  return(this->type);
}

void Weapon::setType(std::string new_type)
{
  this->type = new_type;
}
