#include <iostream>
#include <vector>
#include <algorithm>
#include "Iterator.h"
#include "Military.h"
#include "MilitaryAssembly.h"

using namespace std;

int main(){
    MilitaryAssembly<int>* myAssembly = new MilitaryAssembly<int>();

    myAssembly->enqueue(0);
    myAssembly->enqueue(0);
    myAssembly->enqueue(1);
    myAssembly->enqueue(1);
    myAssembly->enqueue(2);
    myAssembly->enqueue(2);

    while (!myAssembly->isEmpty())
    {
        cout << myAssembly->dequeue() << "\t";
    }
    cout << endl;

    myAssembly->enqueue(0);
    myAssembly->enqueue(0);
    myAssembly->enqueue(1);
    myAssembly->enqueue(1);
    myAssembly->enqueue(2);
    myAssembly->enqueue(2);

    myAssembly->dequeue();
    myAssembly->enqueue(3);

    Iterator<int> i;
    for(i = myAssembly->begin(); !(std::equal(i, myAssembly->end())); ++i){
        cout << *i << "\t";
    }
    cout << *i << endl;
    
    return 0;
}