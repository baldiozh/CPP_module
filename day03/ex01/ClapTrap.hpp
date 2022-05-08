#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define GREEN "\x1b[1;32m"
#define BLUE "\x1b[1;34m"
#define RED "\x1b[1;31m"
#define DEFAULT "\x1b[0m"

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string name;
	int			hit;
	int			energy;
	int			damage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &elem);

	ClapTrap 	&operator=(const ClapTrap& elem);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif