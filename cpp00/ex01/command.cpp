#include "phonebook.hpp"
/*
void  move_contact(PhoneBook phonebook)
{
  std::string save;

  for (std::size_t i; i < 7; i++)
  {
    
  }
}*/

void  add(Contact contact)
{
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string secret;

  std::cout << "Enter the first name of the contact you want add :";
  std::getline(std::cin, first_name);
  std::cout << "Enter the last name of the contact you want add :";
  std::getline(std::cin, last_name);
  std::cout << "Enter the nickname of the contact you want add :";
  std::getline(std::cin, nickname);
  std::cout << "Enter the phone number of the contact you want add :";
  std::getline(std::cin, phone_number);
  std::cout << "Enter the secret of the contact you want add :";
  std::getline(std::cin, secret);

}

void  commande(std::string command, PhoneBook phonebook)
{
  if (command.compare("ADD") == 0)
    add(phonebook.contact[0]);

}
