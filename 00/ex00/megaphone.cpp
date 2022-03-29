#include <iostream>
#include <string>

using namespace std;

int	main(int argc, char **argv){

	if (argc < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else{
		for(int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j] != '\0'; j++)
				cout << (char)toupper(argv[i][j]);
		cout << endl;
	}
	return (0);
}
