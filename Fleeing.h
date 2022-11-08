#ifndef FLEEING_H
#define FLEEING_H
#include <string>
#include "CivilianState.h"

using namespace std;

class CivilianContext;

/**
 * 
 * @brief Inherites from the CivilianState Class and Changes the soldiers state to Fleeing for battle
 * @name Fleeing
 * @author Tinayeshe Mugwagwa
 * 
 */
class Fleeing : public CivilianState 
{
  private:
  string state;
  
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
    virtual string getState() ;
};


#endif