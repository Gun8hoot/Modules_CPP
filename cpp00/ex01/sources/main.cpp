#include "includes/main.hpp"

void  show_contact(PhoneBook phonebook)
{
	std::cout << phonebook.contact[0].first_name;
}

int main(void)
{
	std::string line;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << ">> ";
		std::getline(std::cin, line);
		if (line.compare("EXIT") == 0 || std::cin.eof() == 1)
			break ;
		commande(line, phonebook);
	}
	if (line.empty())
		std::cout << std::endl;
	return (0);
}
