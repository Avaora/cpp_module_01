#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "she's huge but she's so beautiful,\n";
	std::cout << "she's a mammoth of course\n\n";
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "CWALING AWL BARBZ CWALING AWL BARBZ\n\n";
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "Zon't zo it, zon't, zon't zo it\n\n";
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "you stupid fucking dinosaur!!!!\n";
	std::cout << "GET THE FUCK OUT OF HERE!!!!!!\n\n";
}

void	Harl::complain(std::string level)
{
	std::string	cons[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	for(i = 0; i < 4; i++)
	{
		if (level.compare(cons[i]) == 0)
			break ;
	}
	switch(i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break ;
		default:
			std::cout << "* complains about not having a complaint message for insignificant log levels *\n";
	}
}
