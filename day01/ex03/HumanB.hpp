#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
private:
	std::string	name;
	Weapon		*type;

public:
	HumanB(std::string name);
	virtual ~HumanB();
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif
