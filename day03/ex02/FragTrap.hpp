#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &elem);
	~FragTrap(void);

	FragTrap 	&operator=(const FragTrap& elem);
	void		attack(const std::string& target);
	void		highFivesGuys(void);
};

#endif