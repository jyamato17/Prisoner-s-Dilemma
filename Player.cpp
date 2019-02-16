// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu

#include "Player.h"
#include <iostream>


Player::Player(string givenName)
{
    name = givenName;
}
void Player::report()
{
    std::cout << name << "'s score is " << score << std::endl;
}
