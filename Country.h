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
/**
     * @brief Construct a new Country object
     * @param string gets country name
     */
    Country(string);

};

#endif ///==============================Country.h===================================