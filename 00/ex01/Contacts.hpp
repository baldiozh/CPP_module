#ifndef CONTACTS_HPP
#define CONTACTS_HPP
#include <string>

class	UserInfo{
private:
	std::string	data[5];
	std::string	prompt[5];
public:
	UserInfo();
	void	setInfo(void);
	void	contactList(int index);
	void	fullOutput(void);
	bool	checkIndex(char *str);
};

#endif
