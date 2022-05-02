#include "PhoneBook.hpp"

UserInfo::UserInfo(){
	prompt[0] = "First name: ";
	prompt[1] = "Last name: ";
	prompt[2] = "Nickname: ";
	prompt[3] = "Number: ";
	prompt[4] = "Darkest secret: ";
}

void	UserInfo::setInfo(void){
	for (int i = 0; i < FIELDS; i++){
		std::cout << prompt[i];
		if (std::getline(std::cin, data[i]) == 0) {
			std::cout << "Exit\n";
			exit(0);
		}
		if (data[i] == "\0"){
			i--;
			std::cout << RED << "Fill empty fields, please!\n" << DEFAULT;
			continue;
		}
	}
	std::cout << GREEN << " * CONTACT ADDED! * \n" << DEFAULT;
}

bool	UserInfo::checkIndex(char *str){
	for (int i = 0; str[i] != '\0'; i++){
		if (!(std::isdigit(str[i]))){
			std::cout << RED << "Incorrect index, try again: " << DEFAULT;
			return false;
		}
	}
	return true;
}

void	UserInfo::contactList(int index){
	std::cout << "\x1b[1;37m|" << std::setw(10) << index + 1;
	for (int i = 0; i < 3; i++){
		std::cout << "|";
		if (data[i].length() > 9)
			std::cout << data[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << data[i];
	}
	std::cout << "|" << DEFAULT;
	std::cout << std::endl;
}

void	UserInfo::fullOutput(void){
	for(int i = 0; i < FIELDS; i++){
		std::cout << "* " << prompt[i] << data[i];
		std::cout << std::endl;
	}
}

