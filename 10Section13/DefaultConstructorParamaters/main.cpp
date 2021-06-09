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
    Player(string n = "None", int h = 0, int exp = 0);
    ~Player()
    {
        cout << "Destructor called for " << name << endl;
    }
};

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp(xp_val)
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
        Player rifat{baris};        // a copy of baris is made using copy constructor
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










