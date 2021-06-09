#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string n)
    {
        name = n;
    }
    //Overloaded constructors
    Player()
    {
        cout << "No args constructor called" << endl;
    }
    Player(string n)
    {
        cout << "String arg constructor called for " << n << endl;
    }
    Player(string n, int h, int exp)
    {
        cout << "Three args constructor called for " << n << endl;
    }
    ~Player()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player baris;
        baris.set_name("Baris");
        Player hero("H");
        hero.set_name("Hero");
        Player villain("V", 200, 17);
        villain.set_name("Villain");
    }
    
    Player *enemy{new Player};
    enemy->set_name("Enemy");
    
    Player *joker;
    joker = new Player("Joker", 500, 17);
    joker->set_name("Joker");
    
    Player *boss{new Player{"Not boss", 300, 15}};
    boss->set_name("Not Boss");
    
    delete enemy;
    delete joker;
    delete boss;
    
    cout << endl;
}










