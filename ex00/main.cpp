#include "Zombie.hpp"

int	main()
{
	Zombie	*dynamicZombie;
	Zombie	staticZombie("Static");

	dynamicZombie = newZombie("Dynamic");

	dynamicZombie->announce();
	staticZombie.announce();

	delete dynamicZombie;
	return (0);
}