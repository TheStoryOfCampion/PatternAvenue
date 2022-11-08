#ifndef FLEEING_H
#define FLEEING_H
#include <string>
#include "CivilianState.h"

using namespace std;

class CivilianContext;


class Fleeing : public CivilianState 
{
  private:
  string state;
  
  public:
    virtual void handleChange(CivilianContext* c);
    virtual string getState() ;
};


#endif