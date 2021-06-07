#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account baris_account;
    baris_account.set_name("Baris's Account");
    baris_account.set_balance(1000);
    
    if(baris_account.deposit(200))
        cout << "Deposit okey" << endl;
    else
        cout << "Deposit not allowed" << endl;
    
    if(baris_account.withdraw(500))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    if(baris_account.withdraw(2000))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    cout << endl;
    
    
}










