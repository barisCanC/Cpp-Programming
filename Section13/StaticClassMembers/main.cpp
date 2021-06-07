#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

void display_player_name(const Player &val)
{
    cout << val.get_name() << "\n";
}

void display_active_players()
{
    cout << "Active players : " << Player::get_num_players() << endl;
}

int main()
{
    display_active_players();
    Player x = {"X", 34, 45};
    Player y = Player("Y", 22, 22);
    
    Player hero{"Hero"};
    display_active_players();
    
    {
        Player ahmet{"Ahmet"};
        display_active_players();
    }
    display_active_players();
    
    Player *enemy{new Player{"Enemy", 50, 50}};
    display_active_players();
    delete enemy;
    
    display_active_players();
    
    cout << endl;
}









