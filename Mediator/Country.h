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
protected:
    string name;
public:
    Country(string);

};

#endif ///==============================Country.h===================================