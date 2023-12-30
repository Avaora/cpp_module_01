#include "HumanB.hpp"

HumanB::HumanB(std::string newname)
{
	name = newname;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

void	HumanB::setWeapon(Weapon &newweapon)
{
	weapon = &newweapon;
}
