// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu

#include "Jail.h"
#include <ctime>
#include <iostream>

Jail::Jail()
{
    // seed random number generator
    srand((int)time(0));
    
    // create player vector
    players = new vector<Player*>;
    
    // fill vector
    (*players).push_back(new Nice("Alice"));
    (*players).push_back(new Nice("Bob"));
    (*players).push_back(new Mean("Rachel"));
    (*players).push_back(new Mean("Kaitlyn"));
    (*players).push_back(new TFT("Wallace"));
    (*players).push_back(new TFT("George"));
    (*players).push_back(new JYamato("Jonah"));
    (*players).push_back(new JYamato("Jonah2"));
    
}

int Jail::run()
{
    // create two chars to hold the choices
    char player1;
    char player2;
    
    // double for loop to iterate so all players play each other
    for (int i = 0; i < (*players).size(); i++)
    {
        for (int j = 0; j < (*players).size(); j++)
        {
            // if the player is not playing themself
            if (i != j)
            {
                // run the game for 200 rounds
                for (int k = 0; k < 200; k++)
                {
                    
                    // play the round see what they return
                    player1 = (*players)[i]->play(k);
                    player2 = (*players)[j]->play(k);
                
                    // get random chance to turn that player to defective
                    if (rand()%20 == 1)
                    {
                        player1 = 'd';
                    }
                    if (rand() % 20 == 1)
                    {
                        player2 = 'c';
                    }
                
                    // record what the opponent played
                    (*players)[i]->record(k, player2);

                    // find the score
                    int roundScore = slap(player1, player2);
                    (*players)[i]->addToScore(roundScore);
                }
            }
        }
    }
    // print standings
    standings();
    return 0;
}

int Jail::slap(char player1, char player2)
{
    // create an int to return
    int scoreToReturn;
    
    // if the first player chose 'c'
    if (player1 == 'c')
    {
        // then if second player chose 'c' return 2
        if (player2 == 'c')
        {
            scoreToReturn = 2;
        }
        
        // else return 0
        else
        {
            scoreToReturn = 0;
        }
    }
    
    // if the first player chose 'd'
    else
    {
        // if the second player chose 'c' return 3
        if (player2 == 'c')
        {
            scoreToReturn = 3;
        }
        
        // else return 1
        else
        {
            scoreToReturn = 1;
        }
    }
    // return score
    return scoreToReturn;
    
}

int Jail::standings()
{
    // for loop to iterate through all players
    for (int i = 0; i < (*players).size(); i++)
    {
        // print out their name and score
        (*players)[i]->report();
    }
        return 0;
}

Jail::~Jail()
{
    // run through players
    for (int i = 0; i < (*players).size(); i++)
    {
        // delete element in players
        delete (*players)[i];
    }
    // clear the vector
    (*players).clear();
}
