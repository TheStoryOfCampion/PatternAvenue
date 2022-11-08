#ifndef CIVILIANS_H
#define CIVILIANS_H
#include "SubjectCivilians.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;


class SubjectCivilians;

//observer

class Civilians {

public: 
    
    Civilians(string name , string city, int LockDownLevel, bool StateofDisaster );
    void registerForArmy(SubjectCivilians*);
    virtual void update() = 0;
  
     void   setState(int i );
     string getCity();
     string getName();
     bool   getState();

    
  protected:
    SubjectCivilians*  workFor;
    string name;
    string city;
    int LockDownLevel;
    bool   StateofDisaster;
    int state;

};
#endif




