

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		~Zombie();
		Zombie(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif 
