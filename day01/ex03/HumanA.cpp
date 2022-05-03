#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &type){
	this->type = &type;
	this->name = name;
}

HumanA::~HumanA(){
}

void	HumanA::attack(){
	std::cout << this->name << " attacks with their " << *(this->type->getType()) << '\n';
}
