#include "includes/main.hpp"

void  banner(void)
{
	std::cout << "\n\
░█████████  ░██                                         ░██                              ░██       \n\
░██     ░██ ░██                                         ░██                              ░██       \n\
░██     ░██ ░████████   ░███████  ░████████   ░███████  ░████████   ░███████   ░███████  ░██    ░██\n\
░█████████  ░██    ░██ ░██    ░██ ░██    ░██ ░██    ░██ ░██    ░██ ░██    ░██ ░██    ░██ ░██   ░██ \n\
░██         ░██    ░██ ░██    ░██ ░██    ░██ ░█████████ ░██    ░██ ░██    ░██ ░██    ░██ ░███████  \n\
░██         ░██    ░██ ░██    ░██ ░██    ░██ ░██        ░███   ░██ ░██    ░██ ░██    ░██ ░██   ░██ \n\
░██         ░██    ░██  ░███████  ░██    ░██  ░███████  ░██░█████   ░███████   ░███████  ░██    ░██\n\
\n\
";
}

int main(void)
{
	std::string line;
	PhoneBook phonebook;

	banner();
	while (1)
	{
		std::cout << ">> ";
		std::cin >> line;
		if (line.compare("ADD") == 0)
			add(phonebook);
		else if (line.compare("SEARCH") == 0)
			search(phonebook);
		if (line.compare("EXIT") == 0 || std::cin.eof() == 1)
			break;
	}
	if (line.empty())
		std::cout << std::endl;
	return (0);
}
