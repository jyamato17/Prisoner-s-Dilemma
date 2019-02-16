// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu

#pragma once
#include <stdio.h>
#include "Player.h"

class JYamato : public Player
{
public:
    char play (int round);
    JYamato(std::string name);
};
