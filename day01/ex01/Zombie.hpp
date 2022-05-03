#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	virtual	~Zombie();
	void	announce(void);
};

Zombie	*newZombie(std::string name);
Zombie*	zombieHorde( int N, std::string name );

#endif
