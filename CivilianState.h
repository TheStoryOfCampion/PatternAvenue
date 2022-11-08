#ifndef CIVILIANSTATE_H
#define CIVILIANSTATE_H
#include "CivilianContext.h"

#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class CivilianContext;
/**
 * @name Civilian State class
   @author Tinayeshe Mugwagwa
   @brief state of civilians are checked
 * 
 */

class CivilianState {

private :

CivilianState* state;

public:
    /**
 * @brief pure virtual function of getting virtual function
 * 
 * @param c get objects of type civilian context
 */
    virtual void handleChange(CivilianContext*c) = 0;
    /**
     * @brief Get the State object
     * 
     * @return string 
     */
    virtual string getState() = 0;
    


    



};

#endif



