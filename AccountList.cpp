#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;
using std::ios;

/*
class accountHolders
{
public:
    void accountList();
};
*/
void accountList()
{
    system("cd csv && cat account_info.csv");
    /*
    ifstream accountHolders;
    accountHolders.open("csv/account_info.csv", ios::in);
    
    if (!accountHolders) 
        cout << "No Such File";
    else {
        char ch;
        
        while (1) {
            accountHolders >> ch;
            if (accountHolders.eof())
                break;
        
            cout << ch;
        }
    }
    */
}
