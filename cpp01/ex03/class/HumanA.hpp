
#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA
{
  private:
    std::string	name;
    std::string	&type;

  public:
    void	attack();
    HumanA(std::string name, Weapon weapon);
    ~HumanA();
};

#endif // !HUMANA_H
