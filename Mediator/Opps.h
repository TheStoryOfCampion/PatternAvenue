#ifndef OPPS_H
#define OPPS_H
#include <iostream>
#include <string>
#include "Messenger.h"

using namespace std;

/**
 * @brief Opps superclass and sub classes
 * 
 * to be explained further
 * 
 */

class Opps{
protected:
    Messenger *messenger;
    int id;
public:
    Opps();
    ~Opps();
    void changed();
    void OpenTransmission(Messenger*);
    void CloseTransmission();
    virtual void get(string) = 0;
    virtual void set() = 0;
};

class Opp1 : public Opps{
public:
    Opp1();
    void get(string);
    void set();
};

class Opp2 : public Opps{
public:
    Opp2();
    void get(string);
    void set();
};

#endif ///==============================Opps.h==============================