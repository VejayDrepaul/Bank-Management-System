#include <iostream>
#include <iomanip>
#include <string>   
#include "includes/newAccount.h"

using std::cout;
using std::endl;
using std::cin;

void welcomeScreen();

int main() 
{
    char choice;
    welcomeScreen();
    
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
    cin >> choice;
    
    switch(choice) {
        case '1':
            new_account();
            break;
    }
    
    
    return 0;
}

void welcomeScreen()
{
    cout<<"\n\n\n\t   BANK";
    cout<<"\n\n\tMANAGEMENT";
    cout<<"\n\n\t  SYSTEM" << endl;
    
    cout << "\n";
    
}    
 
