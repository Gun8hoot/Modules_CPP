#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
		void announce(void);
		~Zombie();
	friend Zombie *newZombie(std::string name);
	friend void randomChump(std::string name);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif // !ZOMBIE_H
