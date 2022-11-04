#include <iostream>
#include <vector>
#include "Messenger.h"
#include "Opps.h"

using namespace std;

Messenger::Messenger() : nextId(0) {}

int Messenger::StartTransmission(Opps* me ){
    Sender* opp = new Sender;
    opp->Opp = me;
    opp->id = nextId++;
    sender.push_back(opp);
    cout << opp->id << " has started a transmission." << endl;
    return opp->id;
}

void Messenger::broadcast(string mess){
    vector<Sender*>::iterator it;
    for(it = sender.begin(); it != sender.end(); ++it){
        (*it)->Opp->get("Broadcast: "+mess);
    }
}

bool Messenger::SendTo(int id, string mess){
    vector<Sender*>::iterator it;
    bool found = false;
    it = sender.begin();
    while((it != sender.end()) && !found){
        if((*it)->id == id){
            found == true;
            (*it)->Opp->get(mess);
        }
        else{
            it++;
        }
    }
    return found;
}

void Messenger::killTransmisstion(int id){
    vector<Sender*>::iterator it;
    bool found = false;
    int counter = 0;
    it = sender.begin();
    while((it != sender.end()) && !found){
        if((*it)->id == id){
            found = true;
        }
        else{
            it++;
            counter++;
        }
    }
    if(found){
        cout << (*it)->id << " has ended the transmission." << endl;
        sender.erase(it);
    }
}