#include <iostream>
#include "Player.h"

int Player::num_players{};

int Player::get_num_players()
{
    return num_players;
}

Player::Player(const Player &source)
//    :name{source.name}, health(source.health), xp(source.xp)
    :Player(source.name, source.health, source.xp)                      //delegeting
{
    std::cout << "Copy constructor called from " << name << " source " << std::endl;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp(xp_val)
{
    std::cout << "Three args constructor called for " << name << std::endl;
    num_players++;
}

Player::~Player()
{
    num_players--;
}

void Player::set_name(std::string n)
{
    name = n;
}

std::string Player::get_name() const
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








