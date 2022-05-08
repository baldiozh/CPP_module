#include "ClapTrap.hpp"

int main(void){
	ClapTrap hum1("He-man");
	ClapTrap hum2("Skeletor");

	hum1.attack("Skeletor");
	hum2.takeDamage(5);
	hum2.beRepaired(50);
	hum1.takeDamage(1);
	hum1.beRepaired(2);
}