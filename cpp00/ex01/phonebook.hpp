
#pragma once

#include <iostream>

class Contact
{
  public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string secret;
    Contact(std::string first_name,   // Constructor
        std::string last_name,
        std::string nickname,
        std::string phone_number,
        std::string secret)
    {
      this->first_name = first_name;
      this->last_name = last_name;
      this->nickname = nickname;
      this->phone_number = phone_number;
      this->secret = secret;
    }
};

class PhoneBook
{
  public:
    Contact contact[8];
};

void  commande(std::string command, PhoneBook phonebook);
