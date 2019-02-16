// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu
#pragma once
#include <iostream>
#include <vector>
#include "Player.h"
#include "Nice.h"
#include "Mean.h"
#include "TFT.h"
#include "JYamato.h"

// class jail
class Jail
{
protected:
    vector<Player*> *players;
    int playerCount;
public:
    Jail();
    int run();
    int slap(char , char);
    int standings();
    ~Jail();
};

