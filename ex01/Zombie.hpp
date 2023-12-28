#include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	SetName(std::string str);
};

Zombie	*zombieHorde(int N, std::string name);