#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	if (*this != cpy)
		this->_name = cpy._name;
}
