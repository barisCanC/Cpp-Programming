#include <iostream>

using namespace std;

int main()
{
//    1 dollar is 100 cents
//    a quarter is 25 cents
//    a dime is 10 cents
//    a nickel is 5 cents
//    a penny is 1 cent
    
    const int dollar_in_cent{100};
    const int quarter_in_cent{25};
    const int dime_in_cent{10};
    const int nickel_in_cent{5};
    const int penny_in_cent{1};

    cout << "Please enter an amount of cents : " ;
    int amount{};
    cin >> amount;
    
    cout  << "\ndolars   : " <<  amount / dollar_in_cent << endl;
    amount %= dollar_in_cent;
    
    cout << "quarters : "<< amount / quarter_in_cent << endl;
    amount %= quarter_in_cent;
    
    cout << "dimes    : " << amount / dime_in_cent <<endl;
    amount %= dime_in_cent;
    
    cout << "nickels  : " << amount / nickel_in_cent <<endl;
    amount %= nickel_in_cent;
    
    cout << "pennies  : " << amount / penny_in_cent <<endl;
    amount %= penny_in_cent;
    
}










