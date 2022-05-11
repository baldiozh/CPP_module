#include <iostream>
#include <unistd.h>
#include "Base.hpp"

Base	*generate(void) {
	int k;
	srand(time(NULL));
	k = rand() % 3;
	switch (k)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	}
	return (NULL);
}

void	identify(Base *p) {
	if ((dynamic_cast<A *>(p))) {
		std::cout << "PTR: This is A class" << std::endl;
		return;
	}
	if ((dynamic_cast<B *>(p))) {
		std::cout << "PTR: This is B class" << std::endl;
		return;
	}
	if (dynamic_cast<C *>(p)) {
		std::cout << "PTR: This is C class" << std::endl;
		return;
	}
}

void	identify(Base &p) {
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "REF: This is A class" << std::endl;
	}
	catch (std::bad_cast &bc) {
		try {
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "REF: This is B class" << std::endl;
		}
		catch (std::bad_cast &bc) {
			try {
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "REF: This is C class" << std::endl;
			}
			catch (std::bad_cast &bc) {
				std::cerr << "Unexpected class" << std::endl;
			}
		}
	}
}

int main() {
	Base *ptr = generate();

	identify(ptr);
	identify(*ptr);

	delete ptr;
}
