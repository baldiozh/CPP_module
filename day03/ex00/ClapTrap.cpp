#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name ("noname"), hit(10), energy(10), damage(0){
}

ClapTrap::ClapTrap(std::string name) : name (name), hit(10), energy(10), damage(0){
}

ClapTrap::ClapTrap(const ClapTrap &elem){
	*this = elem;
}

ClapTrap::~ClapTrap(){
}

void	ClapTrap::attack(const std::string& target){
	if (hit && energy)	{
		energy-=1;
		std::cout << "ClapTrap * " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (hit && energy)	{
		energy-=1;
		hit+=amount;
		std::cout << "ClapTrap * " << name << " repairs itself " << amount << " hit points" << " and now he has " << hit << " hit points" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hit && energy){
		hit-=amount;
		std::cout << "ClapTrap * " << name << " take damage " << amount << " hit points" << " and now he has " << hit << " hit points" << std::endl;
	}
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& elem){
	std::cout << "Assignation operator called" << std::endl;
	if (this == &elem)
		return (*this);
	this->name = elem.name;
	this->hit = elem.hit;
	this->energy = elem.energy;
	this->damage = elem.damage;
	return (*this);
}
