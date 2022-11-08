#ifndef SUBJECTCIVILIANS_H
#define SUBJECTCIVILIANS_H
#include "Civilians.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//Subject

class  Civilians;

class SubjectCivilians { 
 
  public: 

    bool register1(Civilians*);   // register
    bool deregister(Civilians*);   // deregister    
    void notify();
    
  private:
    
    bool   StateofDisaster;
    vector <Civilians*> subcivil;

};

#endif





