#include "CivilianContext.h"
#include <vector>
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;


CivilianContext::CivilianContext() {
	cout << "Constructor 1 called" << endl;
    state = new Enlisted();
}

CivilianContext::~CivilianContext() {
    cout << "Destructor called" << endl;
    delete state;
    state = 0;
}


void CivilianContext::setState(CivilianState* state_) {
    cout << "setState called" << endl;
    delete state;
    state = state_;
}

void CivilianContext::change() {
    state->handleChange(this);
}
  
/*string CivilianContext::getState() {
    return state->getState();
}*/