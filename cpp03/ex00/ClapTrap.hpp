
#include <iostream>
#include <cstdint>

class ClapTrap
{

	private:
		std::string	_name;
		int			_hit_point;
		int			_energy_point;
		int			_attack_demage;
	public:
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &cpy);
		ClapTrap	*operator=(const ClapTrap &cpy);
		void		attack(const std::string &target);
		void		takeDemage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};
