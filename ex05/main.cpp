#include "Harl.hpp"

int	main()
{
	Harl	minaj;

	minaj.complain("DEBUG");
	minaj.complain("INFO");
	minaj.complain("WARNING");
	minaj.complain("ERROR");

	for(int i = 0; i < 10; i++)
	{
		minaj.complain("WARNING");
		minaj.complain("ERROR");
	}
	return (0);
}
