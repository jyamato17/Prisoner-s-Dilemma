// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu

#include "TFT.h"


char TFT::play (int round)
{
    // create a char to hold the choice
    char playChoice;
    
    // if its round 0 return c
    if (round == 0)
    {
        playChoice = 'c';
    }
    else
    {
        // if the opponents previous choice was c then return c
        if (yourChoices[round - 1] == 'c')
        {
            playChoice = 'c';
        }
        
        // else return 'd'
        else
        {
            playChoice = 'd';
        }
    }
    return playChoice;
}

TFT::TFT(std::string name): Player(name)
{
}
