
#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"

class HumanB
{
  private:
    std::string name;
    std::string &type;

  public:
    void        attack();
    void  setWeapon(Weapon weapon);
    HumanB(std::string name);
    ~HumanB();
};

#endif // !HUMANB_H
