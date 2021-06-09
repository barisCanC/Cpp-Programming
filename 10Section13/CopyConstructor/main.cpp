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
    string get_name();
    int get_health();
    int get_xp();
    
    Player(string n = "None", int h = 0, int exp = 0);
    //Copy constructor
    Player(const Player &source);
    ~Player()
    {
        cout << "Destructor called for " << name << "\n" << endl;
    }
};

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp(xp_val)
{
    cout << "Three args constructor called for " << name << endl;
}

Player::Player(const Player &source)
//    :name{source.name}, health(source.health), xp(source.xp)
    :Player(source.name, source.health, source.xp)                      //delegeting
{
    cout << "Copy constructor called from " << name << " source " << endl;
}

void display(Player val)
{
    val.set_name("val");
    cout << val.get_name() << "\n";
    cout << val.get_health() << "\n";
    cout << val.get_xp() << endl;
}

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    Player can("Can", 150, 15);
    display(can);
    
    {
        Player baris;
        baris.set_name("Baris");
        Player rifat(baris);                                // a copy of baris is made using copy constructor
        rifat.set_name("Rifat");
        Player yu(Player("Y", 500, 17));
        yu.set_name("Yu");
        Player hero("H");
        hero.set_name("Hero");
        Player villain("V", 200, 17);
        villain.set_name("Villain");
        Player ahmet("A", 200);             //************ we didnt have a two args constructor in the previous version of the player class
        ahmet.set_name("Ahmet");        //yani delegetingconstructors projesinde herbir çeşit(no arg, str arg, 3 args) constructor için decleration yapmıştık 
    }                                                      //burada ise yalnızca default arg yapmamız bütün constructor çeşitlerini kapsıyor!!!  ******************
    
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

void Player::set_name(string n)
{
    name = n;
}

string Player::get_name()
{
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









