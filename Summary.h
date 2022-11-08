#ifndef SUMMARY_H
#define SUMMARY_H
#include "Civilians.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;


/**
 * 
 @brief Summary of war
 @name Summary Class
 @author Tinayeshe Mugwagwa
 * 
 */


// Concrete observer1
class Summary : public Civilians {
  public:
/**
   * @brief update the summary of war.
   * 
   */

    virtual void update(); 
};

#endif



  
