#include "Zombie.hpp"

int	main(void){
	Zombie *zombie;

	zombie = newZombie("Putin");
	zombie->announce();
	delete(zombie);
	randomChump("Simonyan");
	return (0);
}
