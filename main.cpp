#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "includes/NewAccount.h"
#include "includes/Administrator.h"

using std::cout;
using std::endl;
using std::cin;

void welcomeScreen();
void option_menu();

int main()
{
  char account_choice;
  cout << "Do you want to login as an admin or customer[A/C]: ";
  cin >> account_choice;

  if (account_choice == "A" || account_choice == "a") {
    admin_creation();
  }
  else {
    cout << "Invalid Input!";
  }

  welcomeScreen();
  option_menu();
  return 0;
}

void welcomeScreen()
{
  cout<<"\n\n\n\t   BANK";
  cout<<"\n\n\tMANAGEMENT";
  cout<<"\n\n\t  SYSTEM" << endl;

  cout << "\n";
}

void option_menu()
{
  cout<<"\n\n\n\tMAIN MENU";
  cout<<"\n\n\t01. NEW ACCOUNT";
  cout<<"\n\n\t02. DEPOSIT AMOUNT";
  cout<<"\n\n\t03. WITHDRAW AMOUNT";
  cout<<"\n\n\t04. BALANCE ENQUIRY";
  cout<<"\n\n\t08. EXIT";
  cout<<"\n\n\tSelect Your Option (1-8) ";
  cout << "\n\n";

  int options;

  cout << "What do you want to do: ";
  cin >> options;

  switch(options) {
    case 1:
      new_account();
    case 5:
      system("python3 depositor.py");
      system("cd csv && cat AccountInfo.csv");
    case 8:
      exit(0);
  }
}
