#include <iostream>
#include <string>

int main(void){
	bool		run;
	std::string	cmd;

	run = true;
	std::cout << "Enter command: ADD, SEARCH or EXIT" << std::endl;
	std::cin >> cmd;
	while (run){
		if (cmd == "ADD"){
			std::cout << cmd << std::endl;
		}
		else if (cmd == "SEARCH"){
			std::cout << cmd << std::endl;
		}
		else if (cmd == "EXIT"){
			std::cout << cmd << std::endl;
			run = false;
		}
		else{
			std::cout << "Wrong command\n";
			return (1);
		}
	}
	return (0);
}
