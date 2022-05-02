#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define	USERS 8
#define GREEN "\x1b[1;32m"
#define RED "\x1b[1;31m"
#define DEFAULT "\x1b[0m"
#include "Contacts.hpp"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

class PhoneBook{
private:
	UserInfo	contacts[USERS];
	int			index;
	int			numOfUsers;
public:
	PhoneBook(void);
	void	add(void);
	void	search(void);
};

#endif
