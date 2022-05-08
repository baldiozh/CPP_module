#include "FragTrap.hpp"

int main(void){	
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	ClapTrap hum1("He-man"); 
	ClapTrap hum2("Skeletor"); 
	ScavTrap scav1;
	ScavTrap scav2("She-ra");
	FragTrap frag1;
	FragTrap frag2("Battle Cat");
	frag1 = frag2;
	frag1.highFivesGuys();

	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	hum1.attack("Skeletor");
	hum2.takeDamage(5);
	hum2.beRepaired(50);
	hum1.takeDamage(1);
	hum1.beRepaired(2);
	scav1.attack("He-man");
	scav2.attack("Skeletor");
	scav1.takeDamage(10);
	scav2.beRepaired(20);
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
}