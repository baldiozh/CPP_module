#include "Literal.hpp"


int main(int ac, char **av) {
	(void) ac;

	try {
		Literal lit(av);
		lit.displayLiterals();
	}
	catch (std::exception &e) {
		std::cerr <<e.what() << std::endl;
	}
	std::cout << std::endl;
}