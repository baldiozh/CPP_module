#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"

class Dog:public Animal{
public:
	Dog();
	Dog(Dog const &rhs);
	virtual ~Dog();
	void makeSound() const;

	Dog &operator=(Dog const &rhs);

private:
	Brain *brain;
};


#endif
