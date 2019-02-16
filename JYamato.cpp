// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu

#include "JYamato.h"
#include <iostream>


JYamato::JYamato(std::string name) : Player(name)
{
}

char JYamato::play(int round)
{
    // create a char to hold d
    char choice = 'd';
    
    // if the round is less than 5 return d
    if (round < 5)
    {
        choice = 'd';
    }

    else
    {
        // if the previous two choices were d return d
        if (yourChoices[round - 1] == 'd' && yourChoices[round - 2] == 'd')
        {
            choice = 'd';
        }
        
        // else if the previous choice was 'd' for the previous and c for the last two return c
        else if (yourChoices[round - 1] == 'd' && yourChoices[round - 2] == 'c')
        {
            choice = 'c';
        }
        
        // else return d
        else
        {
            choice = 'd';
        }
        
    }
    return choice;
}
