#include <iostream>
#include "Iterator.h"
#include "Military.h"
#include "MilitaryAssembly.h"

using namespace std;

template <typename T>
Iterator<T>::Iterator() : head("null"), curr("null"){}

template <typename T>
Iterator<T>::Iterator(const MilitaryAssembly<T>& source, Military<T>* p) : head(source.head), curr(p){}

template <typename T>
T& Iterator<T>::operator*(){
    return curr->Soldier;
}

template <typename T>
Iterator<T> Iterator<T>::operator++(){
    if(this != nullptr){
        this->curr = this->curr->next;
    }
    return *this;
}

template <typename T>
bool Iterator<T>::operator==(const Iterator<T>& rhs) const{
    return this == rhs.curr;
}