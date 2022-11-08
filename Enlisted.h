#ifndef ENLISTED_H
#define ENLISTED_H
#include "CivilianState.h"
//#include "CivilianContext.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
//#include "CivilianState.h"



using namespace std;

//class CivilianContext;

/**
 * 
 * @brief Inherites from the CivilianState Class and Changes the soldiers state to Enlisted for battle
 * @name Enlisted
 * @author Tinayeshe Mugwagwa
 * 
 */

class Enlisted : public CivilianState {
  public:
  /**
    * @brief Handles the state change and makes it Enlisted
    * @return void
    * @param c an object of type CivilianContext
    * 
    */
    virtual void handleChange(CivilianContext* c);

    /**
    * @brief gets the state of the soldiers
    * @return string
    * 
    */
    virtual string getState();
};

#endif

