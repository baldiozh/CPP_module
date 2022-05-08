#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
private:
	std::string name;
	int			hit;
	int			energy;
	int			damage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	virtual~ClapTrap();
	ClapTrap(const ClapTrap &elem);

	ClapTrap 	&operator=(const ClapTrap& elem);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif