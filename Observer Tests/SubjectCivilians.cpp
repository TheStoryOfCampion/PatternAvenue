#include "SubjectCivilians.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool SubjectCivilians::register1(Civilians* person) {
  subcivil.push_back(person);
  person->registerForArmy(this); 
  return true;
}



bool SubjectCivilians::deregister(Civilians* person) {
  bool found = false;

  vector<Civilians*>::iterator it = subcivil.begin();
  while ((it != subcivil.end()) && (! found)) {
    if (*it == person) {
      found = true;
      subcivil.erase(it);
    }
    ++it;
  }
  return found;
}

void SubjectCivilians::notify(){
  vector<Civilians*>::iterator it = subcivil.begin();
  for (it = subcivil.begin(); it != subcivil.end(); ++it){
    (*it)->update();
  }
}
