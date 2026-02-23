
#ifndef HUMANA_H
# define HUMANA_H

# include <string>

class HumanA
{
  private:
    std::string name;
    std::string &type;

  public:
    void        attack()
    HumanA(std::string name, std::string weapon);
    ~HumanA();
}

#endif // !HUMANA_H
