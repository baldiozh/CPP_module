#include <iostream>
#include <string>
#include <fstream>

std::string	replace_line(std::string line, std::string s1, std::string s2){
	std::string	newline;
	size_t		find_pos;
	size_t		len_s1 = s1.length();

	find_pos = line.find(s1);
	while (find_pos != std::string::npos){
		newline += line.substr(0, find_pos);
		newline += s2;
		line = line.substr(find_pos + len_s1, line.length());
		find_pos = line.find(s1);
	}
	newline += line;
	return (newline);
}

void	replace(std::string filename, std::string s1, std::string s2){
	std::ifstream	in;
	std::ofstream	out;
	std::string		line;

	in.open(filename);
	out.open(filename + ".replace", std::ios::trunc);
	if (!in.is_open() || !out.is_open()){
		std::cout << "Doesn't open\n";
		return;
	}
	while (std::getline(in, line)){
		out << replace_line(line, s1, s2);
		if (!in.eof())
			out << std::endl;
	}
	in.close();
	out.close();
}

int main(int argc, char **argv){
	std::ifstream	in;
	std::ofstream	out;
	std::string		line;

	if (argc != 4){
		std::cout << "Enter filename, s1 and s2!\n";
		return (1);
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}
