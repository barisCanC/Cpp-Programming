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
    string get_name()
    {
        return name;
    }
    Player()
    {
        name = "None";
        health = 100;
        xp = 5;
    }
    Player(string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

int main()
{
    Player baris;
    baris.set_name("Baris");
    cout << baris.get_name() << endl;
    
    Player mahmut{"Mahmut", 120, 2};
    cout << mahmut.get_name() << endl;
    
    cout << endl;
}










