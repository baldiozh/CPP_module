#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->type = NULL;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->type = &weapon;
}

HumanB::~HumanB(){
}

void	HumanB::attack(){
	if (this->type)
		std::cout << this->name << " has no gun" <<std::endl;
	else
		std::cout << this->name << " attacks with their " << *(this->type->getType()) << std::endl;
}

