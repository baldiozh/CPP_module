#include "Harl.hpp"

int main(void){
	Harl harl;

	harl.complain("novalid msg");
	harl.complain("error");
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("info");
}
