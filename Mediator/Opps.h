#ifndef OPPS_H
#define OPPS_H
#include <iostream>
#include "Messenger.h"

using namespace std;

/**
 * @brief Opps superclass and sub classes
 * 
 * to be explained further
 * 
 */

class Opps{
private:
    Messenger *messenger;
public:
    void changed();
    void get();
    void set();
};

class Opp1 : public Opps{
public:
    void get();
    void set();
};

class Opp2 : public Opps{
public:
    void get();
    void set();
};

#endif ///==============================Opps.h==============================