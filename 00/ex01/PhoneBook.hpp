#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <iomanip>
#include <cstring>
#include <string>

class PhoneBook{
private:
	UserInfo	contacts[8];
	int			index;
	int			numOfUsers;
public:
	PhoneBook(void);
	void	Add(void);
	void	Search(void);
};

#endif
