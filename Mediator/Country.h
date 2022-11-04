#ifndef COUNTRY_H
#define COUNTRY_H
#include <iostream>
#include "Opps.h"
#include "Messenger.h"

using namespace std;

/**
 * @brief Country class
 * 
 * inherits publicly from Messenger. kinda also still under construction.
 * 
 */

class Country : public Messenger{
private:
    Opps* oppsList;
public:
    void notify(Opps* opp);

};

#endif ///==============================Country.h===================================