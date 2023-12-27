#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*newborn;

	newborn = new Zombie(name);
	return (newborn);
}