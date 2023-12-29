#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string newname);
		void	attack();
		void	setWeapon(Weapon &newweapon);
};