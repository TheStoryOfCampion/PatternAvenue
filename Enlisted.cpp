#include "Enlisted.h"

#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void Enlisted::handleChange(CivilianContext* c) {
    c->setState(new Enlisted());
}

string Enlisted::getState() {
    return "Enlisted more soldiers.";
}