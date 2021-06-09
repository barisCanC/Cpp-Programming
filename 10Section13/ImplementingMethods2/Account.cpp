#include "Account.h"

void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name()
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