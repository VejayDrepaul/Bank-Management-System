#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	string password;
	cout << "Enter a master password: ";
	cin >> password;

	for (int i = 0; i < password.length(); i++) {
		cout << "*";
	}

	return 0;
}
