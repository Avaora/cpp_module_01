#include "Utils.hpp"

Utils::Utils(int argc, char *argv[])
{
	if (argc == 4)
	{
		ifilename = std::string(argv[1]);
		ofilename = ifilename + ".replace";
		s1 = std::string(argv[2]);
		s2 = std::string(argv[3]);
	}
}

Utils::~Utils()
{
	if (ifile.is_open() == true)
		ifile.close();
	if (ofile.is_open() == true)
		ofile.close();
}
int	Utils::argsValid()
{
	if (ifilename.empty() == true)
	{
		std::cout << "ERROR: invalid argument!\n";
		return (1);
	}
	if (s1.empty() == true)
	{
		std::cout << "ERROR: invalid argument!\n";
		return (1);
	}
	if (s2.empty() == true)
	{
		std::cout << "ERROR: invalid argument!\n";
		return (1);
	}
	return (0);
}

int	Utils::ifileOpen()
{
	ifile.open(ifilename.c_str(), std::ios_base::in);
	if ((ifile.is_open() == false) || (ifile.fail() == true))
	{
		std::cout << "ERROR: file couldn't be opened for reading!\n";
		return (1);
	}
	return (0);
}

int	Utils::ofileOpen()
{
	ofile.open(ofilename.c_str(), std::ios_base::out);
	if ((ofile.is_open() == false) || (ofile.fail() == true))
	{
		std::cout << "ERROR: file couldn't be opened for writing!\n";
		return (1);
	}
	return (0);
}

int	Utils::readtoMem()
{
	char	*buf;
	int		len;
	
	if (ifile.eof() == true)
	{
		std::cout << "ERROR: read error!\n";
		return (1);
	}
	ifile.seekg(0, std::ios_base::end);
	len = ifile.tellg();
	if (len == -1)
	{
		std::cout << "ERROR: read error!\n";
		return (1);
	}
	ifile.seekg(0, std::ios_base::beg);
	buf = new char[len + 1];
	ifile.read(buf, len);
	rbyte = ifile.gcount();
	if (ifile.eof() == true)
	{
		std::cout << "ERROR: read error!\n";
		delete []buf;
		return (1);
	}
	buf[rbyte] = 0x0;
	bulk = std::string(buf);
	delete []buf;
	return (0);
}

int	Utils::writetoFile()
{
	ofile.write(bulk.c_str(), rbyte);
	return (0);
}

int	Utils::changeStr()
{
	size_t	pos = 0;
	size_t	cur = 0;
	size_t	len1 = s1.length();
	size_t	len2 = s2.length();

	if (bulk.empty() == true)
	{
		std::cout << "ERROR: read error!\n";
		return (1);
	}
	while (1)
	{
		cur = bulk.find(s1, pos);
		if (cur == std::string::npos)
			break ;
		bulk.erase(cur, len1);
		bulk.insert(cur, s2);
		pos = cur + len2;
	}
	return (0);
}