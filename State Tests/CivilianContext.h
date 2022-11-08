#ifndef CIVILIANCONTEXT_H
#define CIVILIANCONTEXT_H
#include "CivilianState.h"

#include <iostream>

using namespace std;


class CivilianState;

class CivilianContext {
public: 
    CivilianContext();
	~CivilianContext();
	void change();
  	string getCivilian();
	void setState(CivilianState* state);
	string getState();
  
  
  
  private: 
    CivilianState * state;


};

#endif


