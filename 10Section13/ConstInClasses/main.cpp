#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string n);
    string get_name() const;
    int get_health();
    int get_xp();
    
    Player(string n = "None", int h = 0, int exp = 0);
};

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp(xp_val)
{
    cout << "Three args constructor called for " << name << endl;
}

void display_player_name(const Player &val)
{
    cout << val.get_name() << "\n";
}

int main()
{
    const Player Villain{"Villain", 100, 10};
    Player hero{"Hero", 90, 9};
    
    hero.set_name("My boy");
    
    cout << "Villain : " << Villain.get_name() << endl;
    cout << "Hero : " << hero.get_name() << endl;
    
    cout << endl;
}

void Player::set_name(string n)
{
    name = n;
}

string Player::get_name() const
{
//    string n{"Mehmet"};
//    name = n;
    return name;
}

int Player::get_health()
{
    return health;
}

int Player::get_xp()
{
    return xp;
}









