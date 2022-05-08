#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &strREF = str;

	std::cout << &str << std::endl
	std::cout << stringPTR << std::endl;
	std::cout << &strREF << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << strREF << std::endl;
}
