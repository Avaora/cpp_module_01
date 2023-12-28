#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << name << " destroyed.\n";
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::SetName(std::string str)
{
	name = str;
}