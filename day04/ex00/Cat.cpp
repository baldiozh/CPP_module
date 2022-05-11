#include "Cat.h"

Cat::Cat(){
	std::cout << "Default Cat constructor is called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &rhs):Animal(rhs){
	std::cout << "Copy Cat constructor is called" << std::endl;
	*this = rhs;
}

Cat::~Cat(){
	std::cout << "Cat destructor is called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs){
	this->type = rhs.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow meow meow" << std::endl;
}