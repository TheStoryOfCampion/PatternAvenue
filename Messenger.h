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
class Opps;
/**
 * @brief Sender class
 * @name Sender
 * @author Mbofho Mamatsharaga
 * 
 */
class Sender{
public:
    int id;
    Opps* Opp;
};

/**
 * @brief Messenger class
 * @name Messenger
 * @author Mbofho Mamatsharaga
 * 
 */
class Messenger{
public:

    /**
     * @brief Construct a new Messenger object
     * 
     */
    Messenger();

    /**
     * @brief Destroy the Messenger object
     * 
     */
    ~Messenger();

    /**
     * @brief broadcasts a message to be sent
     * @param mess A variable of type string to store the message
     * @return void
     * 
     */
    void broadcast(string);

    /**
     * @brief chooses which coutry the message should be sent to
     * @param id the id of the message to be sent
     * @param mess the message to be sent
     * @return true 
     * @return false 
     */
    bool SendTo(int, string);

    /**
     * @brief Starts the message transmission
     * @param me used to start a transmission with the opps
     * @return int 
     */
    int StartTransmission(Opps*);

    /**
     * @brief Stops the transmission
     * @param id the id of the message to be stopped
     * 
     */
    void killTransmisstion(int);
protected:
    vector<Sender*> sender;
    int nextId; 
};

#endif ///=======================================Messenger.h==========================