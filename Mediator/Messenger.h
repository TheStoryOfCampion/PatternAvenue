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

class Sender{
public:
    int id;
    Opps* Opp;
};

class Messenger{
public:
    Messenger();
    ~Messenger();
    void notify(Opps* opp);
    void broadcast(string);
    bool SendTo(int, string);
    int StartTransmission(Opps*);
    void killTransmisstion(int);
protected:
    vector<Sender*> sender;
    int nextId; 
};

#endif ///=======================================Messenger.h==========================