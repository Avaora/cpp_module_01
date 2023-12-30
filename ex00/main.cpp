#include "Zombie.hpp"

int	main()
{
	Zombie	*dynamicZombie;

	dynamicZombie = newZombie("Dynamic");

	dynamicZombie->announce();
	randomChump("Static");

	delete dynamicZombie;
	return (0);
}
