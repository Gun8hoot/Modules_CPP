#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main(void)
{
	const Animal	*Neko = new Cat();
	const Animal	*Dogo = new Dog();
	const Animal	*Zarbi = new Animal();

	Zarbi->makeSound();
	Dogo->makeSound();
	Neko->makeSound();
	delete Neko;
	delete Dogo;
	delete Zarbi;
}
