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

class CivilianContext;

class Reserve : public CivilianState {
  public:
    virtual void handleChange(CivilianContext* c);
    virtual string getState();
};

#endif 
