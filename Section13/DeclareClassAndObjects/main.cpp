#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    //attributes
    string name{"Player"};
    int health{100};
    int xp{3};
    //methods
    void talk(string);
    bool is_dead();
};

int main()
{
    Player frank;
    Player hero;
    
    Player players[]{frank, hero};
    
    vector<Player>player_vec{frank};
    player_vec.push_back(hero);
    
    Player *new_player{new Player()};
    
    delete new_player;
    cout << endl;
}










