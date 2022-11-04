#include <iostream>
#include "Messenger.h"
#include "Country.h"
#include "Opps.h"

using namespace std;

int main(){
    Messenger* ms = new Country("Ukrain");

    Opps* opp1[2];

    Opps* opp2 = new Opp2();
    opp1[0] = new Opp1();
    opp1[1] = new Opp1();

    opp2->OpenTransmission(ms);
    opp1[0]->OpenTransmission(ms);
    opp1[1]->OpenTransmission(ms);

    opp1[0]->set();
    opp1[0]->set();
    opp1[1]->set();
    opp2->set();

    opp1[1]->CloseTransmission();
    opp2->CloseTransmission();
    opp2->set();

    delete opp2;
    for(int c = 0; c < 2 ; c++){
        delete opp1[c];
    }
    delete ms;

    return 0;
}