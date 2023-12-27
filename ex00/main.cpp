#include "Zombie.hpp"

int	main()
{
	Zombie	*dynamicZombie;

	dynamicZombie = newZombie("Dynamic");

	randomChump("Static");
	dynamicZombie->announce();

	delete dynamicZombie;
	return (0);
}