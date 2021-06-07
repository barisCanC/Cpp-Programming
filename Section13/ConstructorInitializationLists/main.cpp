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
    Player();
    Player(string n);
    Player(string n, int h, int exp);
    ~Player()
    {
        cout << "Destructor called for " << name << endl;
    }
};

Player::Player()
    :name{"None"}, health{0}, xp{}
{
    cout << "No args constructor called for " << name << endl;
}

Player::Player(string name_val)
    :name{name_val}, health{0}, xp{0}
{
    cout << "String arg constructor called for " << name << endl;
}
Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three args constructor called for " << name << endl;
}

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
    
    Player *boss{new Player{"Not Boss", 300, 15}};
    boss->set_name("Not Boss");
    
    delete enemy;
    delete joker;
    delete boss;
    
    cout << endl;
}










