// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu

#pragma once

#include <stdio.h>
#include <string>
using namespace std;

class Player
{
protected:
    static const int ROUNDS = 200;
    char yourChoices[ROUNDS];
    int score = 0;
    string name;
public:
    // constructer
    Player(string givenName);
    virtual char play (int round)=0;
    void record(int round, char oppChoice){yourChoices[round] = oppChoice;}
    void addToScore(int newScore){score += newScore;}
    void report();
    virtual ~Player(){}
};
