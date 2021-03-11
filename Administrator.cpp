#include <iostream>
#include <string>
#include "includes/main.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void admin_creation()
{
  string password;
  cout << "What do you want the master password to be: ";
  cin >> password;

  for (int i = 0; i < password.length(); i++) {
    cout << "*";
  }

  option_menu();
}
