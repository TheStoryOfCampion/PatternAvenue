#ifndef MESSENGER_H
#define MESSENGER_H
#include <iostream>
#include <vector>
#include <string>
#include "Opps.h"

using namespace std;

/**
 * @brief Messenger class
 * 
 * the mediator. still under construction
 * 
 */

class Messenger{
public:
    Messenger();
    ~Messenger();
    void notify(Opps* opp);
    void broadcast(string);
    bool SendTo(int, string);
    void killTransmisstion(int);
protected:
    
};

#endif ///=======================================Messenger.h==========================