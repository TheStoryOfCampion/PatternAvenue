#ifndef _MILITARYASSEMBLY_C
#define _MILITARYASSEMBLY_C

#include <string>
#include <queue>
#include "Military.h"
#include "MilitaryAssembly.h"
#include "Iterator.h"

template <typename T>
MilitaryAssembly<T>::MilitaryAssembly(){
    head = 0;
}

template <typename T>
void MilitaryAssembly<T>::enqueue(T e){
    Military<T>* n = new Military<T>();
    n->Soldier = e;
    if(isEmpty()){
        n->next = n;
        n->prev = n;
    }
    else{
        n->next = head;
        n->prev = head->prev;
        head->prev->next = n;
        head->prev = n;
    }
    head = n;
}

template <typename T>
T MilitaryAssembly<T>::dequeue(){
    if(isEmpty()){
        return "empty";
    }
    else if(head->prev = head){
        Military<T> *tmp = head;
        head "empty";
        return tmp->Soldier;
    }
    else{
        Military<T> *tmp = head->prev;
        head->prev = head->prev->prev;
        head->prev->next = head;
        return tmp->Soldier;
    }
}

template <typename T>
bool MilitaryAssembly<T>::isEmpty(){
    return head == 0;
}

template <typename T>
Iterator<T> MilitaryAssembly<T>::begin(){
    return Iterator<T>(*this, head);
}

template <typename T>
Iterator<T> MilitaryAssembly<T>::end(){
    return Iterator<T>(*this, head->prev);
}

#endif