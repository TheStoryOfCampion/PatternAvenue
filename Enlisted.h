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

class Enlisted : public CivilianState {
  public:
    virtual void handleChange(CivilianContext* c);
    virtual string getState();
};

#endif

