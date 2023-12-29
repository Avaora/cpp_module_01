#include "Utils.hpp"

int	main(int argc, char *argv[])
{
	Utils	args(argc, argv);

	if (argc == 4)
	{
		if (args.argsValid() != 0)
			return (1);
		if (args.ifileOpen() != 0)
			return (1);
		if (args.readtoMem() != 0)
			return (1);
		if (args.ofileOpen() != 0)
			return (1);
		if (args.changeStr() != 0)
			return (1);
		if (args.writetoFile() != 0)
			return (1);
	}
	return (0);
}