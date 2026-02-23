#include "class/Weapon.hpp"
#include "class/HumanA.hpp"
#include "class/HumanB.hpp"

int main(void)
{
  Weapon blade("Katana");
  std::cout << blade.getType() << std::endl;
}
