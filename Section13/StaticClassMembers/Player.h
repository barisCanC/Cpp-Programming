#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string n);
    std::string get_name() const;
    int get_health();
    int get_xp();
    //Copy constructor
    Player(const Player &source);
    Player(std::string n = "None", int h = 0, int exp = 0);
    ~Player();
    
    //Because this func is static, it only has access to static variables
    static int get_num_players();
};

#endif // _PLAYER_H_
