#include <iostream>
#include <string>

using namespace std;

class Account{
private:
    //Attributes
    string name;
    float balance;
    
public:
    //methods
    //defined inline
    void set_balance(float bal){balance = bal;};
    float get_balance(){return balance;};
    
    //methods will be defined outside the class declaration
    void set_name(string n);
    string get_name();
    
    bool deposit(float amount);
    bool withdraw(float amount);
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(float amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(float amount)
{
    if(balance >= amount){
        balance -= amount;
        return true;
    }
    else
        return false;
}

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










