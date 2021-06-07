#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account{
private:
    //Attributes
    std::string name;
    float balance;
    
public:
    //methods
    //defined inline
    void set_balance(float bal){balance = bal;};
    float get_balance(){return balance;};
    
    //methods will be defined outside the class declaration
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(float amount);
    bool withdraw(float amount);
};

#endif // _ACCOUNT_H_
