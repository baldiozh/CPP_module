#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
private:
	void	info(void);
	void	error(void);
	void	debug(void);
	void	warning(void);

public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

void	info(void);
void	error(void);
void	debug(void);
void	warning(void);

#endif
