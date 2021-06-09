#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
private:
    //attributes
    string name{"Player"};
    int health;
    int xp;
public:
    //methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

int main()
{
    Player frank;
//    frank.name = "Frank";
//    frank.health = 100;
//    frank.xp = 12;
    frank.talk("Hi there");
    cout << endl;
    
    Player *enemy{new Player};
//    (*enemy).name = "Enemy";
//    enemy->health = 100;
//    enemy->xp = 17;
    enemy->talk("I will destroy you!");
    cout << endl;
    
    delete enemy;
    cout << endl;
}










