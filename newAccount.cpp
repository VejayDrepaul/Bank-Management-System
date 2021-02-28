#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::fstream;
using std::ofstream;

class accountCreation
{    
public:
    void new_accout();
};

int numberCreation();

void new_account()
{
    int account_number, init_amount;
    account_number = numberCreation();
    string account_holder;
    char account_type;
    
    fstream fout;
    fout.open("csv/account_info.csv");
    
    cout << "\n";

    cout << "Enter the name of the account holder: ";
    cin >> account_holder;
    cout << "\n";
    
    cout << "Your account number is: " << account_number;
    cout << "\n\n";
        
    cout << "What type of account do you want to open [(C)hecking/(S)avings]: ";
    cin >> account_type;
    cout << "\n";

    cout << "Enter the amount you want to deposit right now: ";
    cin >> init_amount;
    
    fout << "Holder Name" << ","
         << " Account Owner" << ","
         << " Account Type" << ","
         << " Amount Deposited"
         << "\n"
         << account_holder << ", "
         << account_number << ", "
         << account_type << ", $"
         << init_amount
         << "\n";
}

int numberCreation()
{
    int random_number = 100;
    srand((unsigned) time(0));
    for (int index = 0; index < 10; index++) {
        random_number = (rand() % 999999999999) + 1;
    }
    
    return random_number;
}
