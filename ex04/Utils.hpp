#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <fstream>
# include <string>

class	Utils
{
	private:
		std::string		ifilename;
		std::string		ofilename;
		std::string		s1;
		std::string		s2;
		std::string		bulk;
		std::ifstream	ifile;
		std::ofstream	ofile;
	public:
		Utils(int argc, char *argv[]);
		~Utils();
		int		argsValid();
		int		ifileOpen();
		int		ofileOpen();
		int		readtoMem();
		int		writetoFile();
		int		changeStr();
};
#endif
