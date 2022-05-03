#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *zombiehorde;

	zombiehorde = (Zombie *)operator new (sizeof(Zombie) * N);
	for (int i = 0; i < N; i++)
		new(&zombiehorde[i]) Zombie(name);
	return (zombiehorde);
}
