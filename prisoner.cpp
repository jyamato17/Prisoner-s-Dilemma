// Jonah Yamato
// ITP 165, Fall 2018
// Homework 10
// jyamato@usc.edu

#include <iostream>
#include "Player.h"
#include "Nice.h"
#include "Mean.h"
#include "TFT.h"
#include "JYamato.h"
#include "Jail.h"

int main()
{
    // create jail object, run it, then delete it
    Jail trial;
    trial.run();
    trial.~Jail();
    return 0;
}
