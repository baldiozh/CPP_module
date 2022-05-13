#include <list>
#include "easyfind.hpp"
#include <vector>

int main( void ) {
	{
		std::list<int>	lst1;

		std::list<int>::const_iterator it;

		for (int i = 0; i != 12; ++i) {
			lst1.push_back(i);
		}
		try {
			std::cout << "Wanna find 11: ";
			it = easyfind(lst1, 11);
			std::cout << "Wanna find 11: " << *it << " - OK!" << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() <<std::endl;
		}
		std::cout << std::endl;

		try {
			std::cout << "Wanna find 15: ";
			it = easyfind(lst1, 15);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() <<std::endl;
		}
		std::cout << std::endl;
	}

	{
		std::vector<int> v1;

		std::vector<int>::const_iterator it;

		for (int i = 0; i != 12; ++i) {
			v1.push_back(10 - i);
		}
		try {
			std::cout << "Wanna find  1: ";
			it = easyfind(v1, 1);
			std::cout << *it << " - OK!" << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() <<std::endl;
		}
	}
}
