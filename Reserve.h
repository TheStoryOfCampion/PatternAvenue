#ifndef RESERVE_H
#define RESERVE_H
#include "CivilianState.h"
#include "CivilianContext.h"
#include "Enlisted.h"
#include "Refugee.h"
#include "Fleeing.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

/**
 * 
 @brief Reserve team of Soldiers 
 @name Reserve Class
 @author Tinayeshe Mugwagwa
 * 
 */

class CivilianContext;

class Reserve : public CivilianState {
  public:
  /**
   * @brief Virtual function that gets change of state 
   * 
   * @param c accepts objects of type CivilianContent
   */
    virtual void handleChange(CivilianContext* c);
     /**
     * @brief Get the State object
     * 
     * @return string 
     */
    virtual string getState();
};

#endif 
