#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
	std::cout << "FragTrap * default constructor" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap * name constructor" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}

FragTrap::FragTrap(const FragTrap &elem) : ClapTrap(elem){
	std::cout << "FragTrap * copy constructor" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap * destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << name << ": High fives!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& elem){
	ClapTrap::operator=(elem);
	return (*this);
}
