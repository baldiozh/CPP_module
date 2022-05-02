#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#define FIELDS 5
#define USERS 8
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>


class	UserInfo{
private:
	std::string	data[USERS];
	std::string	prompt[FIELDS];
public:
	UserInfo();
	void	setInfo(void);
	void	contactList(int index);
	void	fullOutput(void);
	bool	checkIndex(char *str);
};

#endif
