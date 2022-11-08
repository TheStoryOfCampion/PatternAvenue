#ifndef REFUGEE_H
#define REFUGEE_H
#include "CivilianState.h"
#include "CivilianContext.h"
#include "Enlisted.h"
#include "Reserve.h"
#include "Fleeing.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;


class CivilianContext;

/**
 * @brief Inherites from the CivilianState Class and Changes the Civilians state to Refugess 
 * @name Refugee
 * @author Tinayeshe Mugwagwa 
 * 
 */

class Refugee : public CivilianState {
  public:
  /**
  * @brief Handles the state change and makes it Fleeing
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