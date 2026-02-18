
#include "includes/main.hpp"

void Contact::adding_contact(void)
{
	if (!std::cin.eof())
		std::cout << "Enter the first name of the contact you want add : ";
	std::cin >> this->first_name;

	if (!std::cin.eof())
		std::cout << "Enter the last name of the contact you want add : ";
	std::cin >> this->last_name;

	if (!std::cin.eof())
		std::cout << "Enter the nickname of the contact you want add : ";
	std::cin >> this->nickname;

	if (!std::cin.eof())
		std::cout << "Enter the phone number of the contact you want add : ";
	std::cin >> this->phone_number;

	if (!std::cin.eof())
		std::cout << "Enter the secret of the contact you want add : ";
	std::cin >> this->secret;

	if (!std::cin.eof())
		std::cout << "The contact have been added !" << std::endl;
}

