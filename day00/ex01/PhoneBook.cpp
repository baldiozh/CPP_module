#include "PhoneBook.hpp"

PhoneBook::PhoneBook (void){
	index = 0;
	numOfUsers = 0;
}

void	PhoneBook::add(void){
	std::cout << GREEN << "Enter the information about the new contact" << DEFAULT << std::endl;
	if (index == USERS) {
		index = 0;
	}
	contacts[index].setInfo();
	index++;
	if (numOfUsers < 8) {
		numOfUsers++;
	}
}

void	PhoneBook::search(void){
	int			ind;
	std::string	index;
	char		check[index.length() + 1];

	if (numOfUsers > 0){
		std::cout << "\x1b[1;37m|     index|first name| last name|  nickname|\x1b[0m" << std::endl;
		for (int i = 0; i < numOfUsers; i++){
			contacts[i].contactList(i);
		}
	} else{
		std::cout << RED << "No contacts! Use the ADD, please." << DEFAULT << std::endl;
		return;
	}
	std::cout << GREEN << "Enter the contact's index: " << DEFAULT;
	while(true){
		if (std::getline(std::cin, index) == 0){
			std::cout << "Exit" << std::endl;
			exit(0);
		}
		std::strcpy(check, index.c_str());
		if (!(contacts[0].checkIndex(check)))
			continue;
		ind = std::atoi(check);
		if (ind > 0 && ind < numOfUsers + 1) {
			contacts [ind - 1].fullOutput();
			return;
		} else
			std::cout << RED << "Wrong index! Try another: " << DEFAULT;
	}
}
