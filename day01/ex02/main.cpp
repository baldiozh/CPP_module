#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &strREF = str;

	std::cout << &str << std::endl << stringPTR << std::endl << &strREF << std::endl;
	std::cout << str << std::endl << *stringPTR << std::endl << strREF << std::endl;
}
