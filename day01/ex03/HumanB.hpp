#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB{
private:
	std::string	name;
	Weapon	*type;
public:
	HumanB(std::string name, Weapon &type);
	void	attack();
	virtual ~HumanB();
};


#endif
