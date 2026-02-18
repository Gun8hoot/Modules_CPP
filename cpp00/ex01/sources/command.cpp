#include "includes/main.hpp"
/*
void  move_contact(PhoneBook phonebook)
{
  std::string save;

  for (std::size_t i; i < 7; i++)
  {
    
  }
}*/

static void  show_contact(PhoneBook phonebook)
{
	for (int i = 0; i < phonebook.recorded; i++)
	{
		std::cout << "Entry " << i << ":"<< std::endl;
		std::cout << phonebook.contact[i].first_name << std::endl;
		std::cout << phonebook.contact[i].last_name << std::endl;
		std::cout << phonebook.contact[i].nickname << std::endl;
		std::cout << phonebook.contact[i].phone_number << std::endl;
		std::cout << phonebook.contact[i].secret << std::endl;
		std::cout << "----------------" << std::endl;
	}
}

void  adding_prompt(PhoneBook &phonebook)
{
	if (phonebook.recorded < 8)
	{
		phonebook.contact[phonebook.recorded].adding_contact();
		phonebook.recorded++;
	}
	show_contact(phonebook);
}

void  searching(PhoneBook phonebook)
{
	(void)phonebook;
}

void  commande(std::string line, PhoneBook &phonebook)
{
  if (line.compare("ADD") == 0)
    adding_prompt(phonebook);

}
