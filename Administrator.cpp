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

  cout << "Are you sure you want your password to be: ";
  for (int i = 0; i < password.length(); i++) {
    cout << "*";
  }

  cout<<"\n\n\n\tMAIN MENU";
  cout<<"\n\n\t01. NEW ACCOUNT";
  cout<<"\n\n\t02. DEPOSIT AMOUNT";
  cout<<"\n\n\t03. WITHDRAW AMOUNT";
  cout<<"\n\n\t04. BALANCE ENQUIRY";
  cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
  cout<<"\n\n\t06. CLOSE AN ACCOUNT";
  cout<<"\n\n\t07. MODIFY AN ACCOUNT";
  cout<<"\n\n\t08. EXIT";
  cout<<"\n\n\tSelect Your Option (1-8) ";
  cout << "\n\n";
}
