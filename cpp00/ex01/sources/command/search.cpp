
#include "includes/main.hpp"

void  padding(std::string colums)
{
	std::size_t len = colums.length();

	std::cout << "|";
	for (std::size_t i = 0; i < 10; i++)
	{
		if (len > 10 && i == 9)
			std::cout << ".";
		else if (len < 10 && i >= len)
			std::cout << " ";
		else
			std::cout << colums[i];
	}
}

void  search(PhoneBook phonebook)
{
	int index = 0;

	if (phonebook.recorded == 0)
	{
		std::cout << "The contact list is empty." << std::endl;
		return ;
	}
	while ((index < 1 || index > 8) && index < phonebook.recorded && std::cin.eof() == 0)
	{
		std::cout <<  phonebook.recorded << "index saved."<< std::endl;
		std::cout << "Enter the index of the contact you want see : ";
		std::cin >> index;
	}
	if (index >= 1 && index <= 8)
	{
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		padding(phonebook.contact[index - 1].first_name);
		padding(phonebook.contact[index - 1].last_name);
		padding(phonebook.contact[index - 1].nickname);
		padding(phonebook.contact[index - 1].phone_number);
		std::cout << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
}
/*
void  search(PhoneBook phonebook)
{
	if (phonebook.recorded == 0)
	{
		std::cout << "The contact list is empty." << std::endl;
		return ;
	}
	for (int i = 0; i < phonebook.recorded; i++)
	{
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		padding(phonebook.contact[i].first_name);
		padding(phonebook.contact[i].last_name);
		padding(phonebook.contact[i].nickname);
		padding(phonebook.contact[i].phone_number);
		std::cout << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}
*/
