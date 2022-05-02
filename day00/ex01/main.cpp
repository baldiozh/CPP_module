#include "Contacts.hpp"
#include "PhoneBook.hpp"

int main(void){
	PhoneBook	contact;
	std::string	cmd;

	std::cout << GREEN << "Enter command: ADD, SEARCH or EXIT" << DEFAULT << std::endl;
	while (true){
		std::cout << " >> ";
		if (std::getline(std::cin, cmd) == 0) {
			std::cout << "EXIT" << std::endl;
			exit(0);
		}
		if (cmd == "ADD")
			contact.add();
		else if (cmd == "SEARCH")
			contact.search();
		else if (cmd == "EXIT")
			return (0);
		else if (cmd == "\0")
			continue;
		else
			std::cout << "Wrong command\n";
	}
	return (0);
}
