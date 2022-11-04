#include <iostream>
#include <sstream>
#include <vector>
#include "Opps.h"
#include "Messenger.h"
#include "Country.h"

using namespace std;

Opps::Opps(){
    messenger = 0;
    id = -1;
}

void Opps::OpenTransmission(Messenger* mess){
    messenger = mess;
    id = messenger->StartTransmission(this);
}

void Opps::CloseTransmission(){
    messenger->killTransmisstion(id);
}

Opps::~Opps(){
    messenger = 0;
    id = -1;
}

Opp1::Opp1() : Opps(){
    cout << "Opp1 created==========================" << endl;
}

void Opp1::get(string mess){
    cout << id << "received a transmission from " << mess << endl;
}

void Opp1::set(){
    string toId;
    string mess;
    cout << "Opp 1 " << id << " sends a message to? ";
    getline(cin, toId, '\n');
    cout << "Opp 1 " << id << " transmission: ";
    getline(cin, mess, '\n');
    ostringstream convert;
    convert << id;
    messenger->SendTo(atoi(toId.c_str()), convert.str()+": "+mess);
}

Opp2::Opp2() : Opps(){
    cout << "Opp2 created==========================" << end;
}

void Opp2::get(string mess){
    cout << id << " received a transmission from " << mess << endl;
}

void Opp2::set(){
    string mess;
    cout << "Opp 2 " << id << " transmission: ";
    getline(cin, mess, '\n');
    messenger->broadcast(mess);
}