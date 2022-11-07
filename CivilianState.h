#ifndef CIVILIANSTATE_H
#define CIVILIANSTATE_H
#include "CivilianContext.h"

#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//class CivilianContext;

class CivilianState {

private :
CivilianState* state;

public:
    virtual void handleChange(CivilianContext* c) = 0;
    virtual string getState() = 0;
    virtual ~CivilianState();



};

#endif



