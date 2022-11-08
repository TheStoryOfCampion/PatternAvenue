#ifndef SUBJECTCIVILIANS_H
#define SUBJECTCIVILIANS_H
#include "Civilians.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//Subject
/**
 * 
 @brief Registers Civilians for war 
 @name Subject Civilians Class
 @author Tinayeshe Mugwagwa
 * 
 */

class  Civilians;

class SubjectCivilians { 
 
  public: 

  /**
     * @brief Registers civilians for war
     * 
     * @return true 
     * @return false 
     */

    bool register1(Civilians*);   // register

    /**
     * @brief Dergisters civilians for war
     * 
     * @return true 
     * @return false 
     */

    bool deregister(Civilians*);   // deregister 

      /**
     * @brief notify of any possible attacks.
     * 
     */
    
       
    void notify();
    
  private:
    
    bool   StateofDisaster;
    vector <Civilians*> subcivil;

};

#endif





