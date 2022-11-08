#include "Refugee.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void Refugee::handleChange(CivilianContext* c) {
    c->setState(new Refugee());
}

string Refugee::getState() {
    return "Refugee";
}