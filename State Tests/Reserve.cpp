#include "Reserve.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;


void Reserve::handleChange(CivilianContext* c) {
    c->setState(new Reserve());
}

string Reserve::getState() {
    return "Reserve";
}