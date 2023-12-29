#include <iostream>

int	main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address of string: " << &str << "\n";
	std::cout << "address held by stringPTR: " << stringPTR << "\n";
	std::cout << "address held by stringREF: " << &stringREF << "\n\n";

	std::cout << "value of string: " << str << "\n";
	std::cout << "value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "value pointed to by stringREF: " << stringREF << "\n";
	return (0);
}