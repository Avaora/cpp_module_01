#include "HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon &newweapon): weapon(newweapon)
{
	name = newname;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
