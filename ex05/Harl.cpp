#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "Debug: she's huge but she's so beautiful,\n";
	std::cout << "she's a mammoth of course\n\n";
}

void	Harl::info(void)
{
	std::cout << "Info: CWALING AWL BARBZ CWALING AWL BARBZ\n\n";
}

void	Harl::warning(void)
{
	std::cout << "Warning: Zon't zo it, zon't, zon't zo it\n\n";
}

void	Harl::error(void)
{
	std::cout << "Error: you stupid fucking dinosaur!!!!\n";
	std::cout << "GET THE FUCK OUT OF HERE\n\n";
}

void	Harl::complain(std::string level)
{
	void	(Harl::*arr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(str[i]) == 0)
		{
			(this->*arr[i])();
			break ;
		}
	}
}