#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	name = str;
	std::cout << "Zombie: " << name << " created.\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << name << " destroyed.\n";
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
