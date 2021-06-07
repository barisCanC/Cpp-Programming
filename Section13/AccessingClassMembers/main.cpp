#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    //attributes
    string name;
    int health;
    int xp;
    //methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

class Account{
public:
    //attributes
    string name;
    double balance;
    //methods
    bool withdraw(double bal)
    {
        balance -= bal;
        cout << " In withdraw. " << endl;
    }
    bool deposit(double bal)
    {
        balance += bal;
        cout << " In deposit. " << endl;
    }
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank_account";
    frank_account.balance = 100;
    frank_account.deposit(10);
    frank_account.withdraw(20);
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    cout << endl;
    
    Player *enemy{new Player};
    (*enemy).name = "Enemy";
    enemy->health = 100;
    enemy->xp = 17;
    enemy->talk("I will destroy you!");
    cout << endl;
    
    delete enemy;
    cout << endl;
}










