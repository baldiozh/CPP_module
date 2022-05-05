#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA{
private:
	std::string	name;
	Weapon	*type;
public:
	HumanA(std::string name, Weapon &type);
	void	attack();
	virtual ~HumanA();
};


#endif
