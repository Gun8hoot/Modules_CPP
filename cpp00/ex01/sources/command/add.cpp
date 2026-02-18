
#include "includes/main.hpp"

//     Index      f_name     l_name     nick
//	+----------+----------+----------+---------+
//	|          |          |          | 
//	+----------+----------+----------+---------+
//	|          |          |          |         |
//	+----------+----------+----------+---------+
//	|          |          |          |         |
//	+----------+----------+----------+---------+

void  append_contact(PhoneBook phonebook)
{
	PhoneBook tmp;

	tmp.adding_contact();
}

void  add(PhoneBook phonebook)
{
	if (phonebook.recorded < 8)
	{
		phonebook.contact[phonebook.recorded].adding_contact();
		phonebook.recorded++;
	}
	else
		append_contact(phonebook);
}
