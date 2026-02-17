
#include "includes/main.hpp"

Contact::adding_contact(void)
	{
		std::cout << "Enter the first name of the contact you want add : ";
		std::cin >> this->first_name;

		std::cout << "Enter the last name of the contact you want add : ";
		std::cin >> this->last_name;

		std::cout << "Enter the nickname of the contact you want add : ";
		std::cin >> this->nickname;

		std::cout << "Enter the phone number of the contact you want add : ";
		std::cin >> this->phone_number;

		std::cout << "Enter the secret of the contact you want add : ";
		std::cin >> this->secret;

		std::cout << "The contact have been added !" << std::endl;
	}
