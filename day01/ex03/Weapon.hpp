#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon{
private:
	std::string type;
public:
	std::string	getType();
	void	setType(std::string type);
};

#endif
