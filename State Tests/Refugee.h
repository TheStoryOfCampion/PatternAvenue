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

class Refugee : public CivilianState {
  public:
    virtual void handleChange(CivilianContext* c);
    virtual string getState();
};

#endif