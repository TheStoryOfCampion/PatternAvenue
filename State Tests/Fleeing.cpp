#include "Fleeing.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void Fleeing::handleChange(CivilianContext* c) {
    c->setState(new Fleeing());
}

string Fleeing::getState() {
    
    
    return "Fleeing" ;

}