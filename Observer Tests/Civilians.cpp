#include "Civilians.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;


Civilians::Civilians(string name , string city, int LockDownLevel, bool StateofDisaster ){

name = name ;
city =city;
LockDownLevel = LockDownLevel;
StateofDisaster = StateofDisaster;

}

void Civilians::registerForArmy(SubjectCivilians* employer) {
  workFor = employer;
}


void Civilians::setState(int i) {
  state = i ;
}

string Civilians::getName() {
  return name ;
}


bool Civilians::getState() {
  return StateofDisaster ;
}

string Civilians::getCity() {
  return city ;
}

