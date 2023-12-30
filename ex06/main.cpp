#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	minaj;

	if (argc == 2)
		minaj.complain(std::string(argv[1]));
	return (0);
}
