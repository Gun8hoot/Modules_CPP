#include "includes/main.hpp"
/*
void  move_contact(PhoneBook phonebook)
{
  std::string save;

  for (std::size_t i; i < 7; i++)
  {
    
  }
}*/

void  show_contact(PhoneBook phonebook)
{
	int i = 0;
	while (i < phone.entry)
	{
		std::cout << "Entry " << i << ":"<< std::endl;
		std::cout << phonebook.contact[i].first_name << std::endl;
		std::cout << phonebook.contact[i].last_name << std::endl;
		std::cout << phonebook.contact[i].nickname << std::endl;
		std::cout << phonebook.contact[i].phone_number << std::endl;
		std::cout << phonebook.contact[i].secret << std::endl;
		std::cout << "----------------"
	}
}

void  adding_prompt(PhoneBook phonebook)
{
	if (entry < 8)
	{
		phonebook.contact[phonebook.entry + 1].adding_contact();
		phonebook.entry++;
	}
	show_contact(phonebook);
}

void  commande(std::string line, PhoneBook phonebook)
{
	Contact contact;

  if (line.compare("ADD") == 0)
    adding_prompt(phonebook);

}
