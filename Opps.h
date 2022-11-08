#ifndef OPPS_H
#define OPPS_H
#include <iostream>
#include <string>
#include "Messenger.h"

using namespace std;

class Messenger;

/**
 * @brief Opps superclass and sub classes for the oppositions
 * @author Mbhofho Mamatsharaga
 * @name Opps
 * 
 */
class Opps{
protected:
    Messenger *messenger;
    int id;
public:

/**
 * @brief Construct a new Opps object
 * 
 */
    Opps();

    /**
     * @brief Destroy the Opps object
     * 
     */
    virtual ~Opps();
    void changed();
    /**
     * @brief Open a message transmission for the message to be sent to another country
     * @param mess an object of type Messenger
     * @return void
     */
    void OpenTransmission(Messenger*);

    /**
     * @brief close the message sending transmission 
     * @return void
     * 
     */
    void CloseTransmission();

    /**
     * @brief A pure virtual function to be implemented further down the hierarchy
     * @param mess the message for another country
     * @return void
     */
    virtual void get(string) = 0;

    /**
     * @brief A pure virtual function to be implemented further down the hierarchy
     * @return void
     * 
     */
    virtual void set() = 0;
};

/**
 * @brief Inherites from the Opps class
 * @author Mbhofho Mamatsharaga
 * @name Opp1
 */
class Opp1 : public Opps{
public:
/**
 * @brief Construct a new Opp 1 object
 * 
 */
    Opp1();
    /**
     * @brief gets the name of the transmission from another country 
     * @param mess The message from another country
     * @return void
     */
    void get(string);

    /**
     * @brief sets the name of the transmission
     * @return void
     * 
     */
    void set();
};

/**
 * @brief Inherites from the Opps class
 * @author Mbhofho Mamatsharaga
 * @name Opp1
 */
class Opp2 : public Opps{
public:

/**
 * @brief Construct a new Opp 2 object
 * 
 */
    Opp2();

    /**
     * @brief gets the name of the transmission from another country 
     * @param mess The message from another country
     * @return void
     */
    void get(string);

    /**
     * @brief sets the name of the transmission
     * @return void
     * 
     */
    void set();
};

#endif ///==============================Opps.h==============================