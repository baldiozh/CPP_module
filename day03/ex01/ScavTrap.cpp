#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	std::cout << "ScavTrap * default constructor" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap * name constructor" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &elem) : ClapTrap(elem){
	std::cout << "ScavTrap * copy constructor" << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap * destructor" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (hit && energy)	{
		energy-=1;
		std::cout << "ScavTrap * " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap * " << name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& elem){
	ClapTrap::operator=(elem);
	return (*this);
}
