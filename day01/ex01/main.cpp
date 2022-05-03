#include "Zombie.hpp"

int main(){
	Zombie *horde;
	int n = 5;

	horde = zombieHorde(n, "PutinTV");
	for (int i = 0 ; i < n; i++)
		horde[i].announce();
	for(int i = 0; i < n; i++)
		horde[i].~Zombie();
	operator delete(horde);
}
