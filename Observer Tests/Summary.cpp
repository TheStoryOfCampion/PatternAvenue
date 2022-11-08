#include "Summary.h"
#include "Civilians.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>


void Summary::update() {
  cout << getName() << "Has been drafted" <<  endl;
  cout << getCity() << "is on lockdown level" << LockDownLevel << endl;
   
  if (getState() == false) {
    cout << "Nation is not in a state of disaster" << endl;   
    }
    else{
    cout << "Nation is  in a state of disaster" << endl;
    }
  } 