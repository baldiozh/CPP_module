#include "Animal.hpp"

Animal::Animal():type("Animal"){
	std::cout << "Default Animal constructor is called" << std::endl;
}

Animal::Animal(const Animal &rhs){
	std::cout << "Copy Animal constructor is called" << std::endl;
	*this = rhs;
}

Animal::~Animal(){
	std::cout << "Animal destructor is called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs){
	this->type = rhs.type;
	return *this;
}

std::string Animal::getType() const{
	return (this->type);
}

void Animal::makeSound() const{
	std::cout << "It's animal sound!" << std::endl;
}

