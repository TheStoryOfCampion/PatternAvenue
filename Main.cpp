#include <iostream>
#include "Iterator.h"
#include "Military.h"
#include "MilitaryAssembly.h"

using namespace std;

int main(){
    MilitaryAssembly<string>* myAssembly = new MilitaryAssembly<string>();

    myAssembly->enqueue("Army");
    myAssembly->enqueue("Army");
    myAssembly->enqueue("Navy");
    myAssembly->enqueue("Navy");
    myAssembly->enqueue("AirForce");
    myAssembly->enqueue("AirForce");

    while (!myAssembly->isEmpty())
    {
        cout << myAssembly->dequeue() << "\t";
    }
    cout << endl;

    myAssembly->enqueue("Army");
    myAssembly->enqueue("Army");
    myAssembly->enqueue("Navy");
    myAssembly->enqueue("Navy");
    myAssembly->enqueue("AirForce");
    myAssembly->enqueue("AirForce");

    myAssembly->dequeue();
    myAssembly->enqueue("ye");

    Iterator<string> i;
    for(i = myAssembly->begin(); !(i == myAssembly->end()); ++i){
        cout << *i << "\t";
    }
    cout << *i << endl;

    

    return 0;
}