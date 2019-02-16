// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu

#pragma once
#include "Player.h"
#include <stdio.h>

class Nice : public Player
{
public:
    char play (int round){return ('c');}
    Nice (std::string name);
};

