

#include "phonebook.hpp"

int main(void)
{
  std::string line;
  PhoneBook   phonebook;

  while (1)
  {
    std::cout << ">> ";
    if (!std::getline(std::cin, line) || line.compare("EXIT") == 0)
      break ;
    std::cout << line << std::endl;
    commande(line, phonebook);
  }
  std::cout << std::endl;
  return (0);
}
