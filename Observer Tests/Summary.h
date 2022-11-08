#ifndef SUMMARY_H
#define SUMMARY_H
#include "Civilians.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// Concrete observer1
class Summary : public Civilians {
  public:
    virtual void update(); 
};

#endif



  
