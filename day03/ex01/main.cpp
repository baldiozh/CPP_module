#include "ScavTrap.hpp"

int main(void){
	ClapTrap hum1("Skeletor");
	ClapTrap hum2("He-man");
	ScavTrap scav1;
	ScavTrap scav2("She-ra");

    std::cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	hum1.attack("He-man");
	hum2.takeDamage(5);
	hum2.beRepaired(50);
	hum1.takeDamage(1);
	hum1.beRepaired(2);
	scav1.attack("Skeletor");
	scav2.attack("He-man");
	scav1.takeDamage(10);
	scav2.beRepaired(20);
    std::cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
}