#include "includes/main.hpp"

int main(void)
{
	std::string line;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << ">> ";
		std::cin >> line;
		if (line.compare("EXIT") == 0 || std::cin.eof() == 1)
			break ;
		commande(line, phonebook);
	}
	if (line.empty())
		std::cout << std::endl;
	return (0);
}
