#ifndef MILITARYASSEMBLY_H
#define MILITARYASSEMBLY_H
#include <iostream>
#include <vector>
#include "Military.h"
#include "Iterator.h"
#include "MilitaryAssembly.cpp"
using namespace std;
/**
 * @brief Military assembly class
 * also still under construction. 
 * 
 * @tparam T 
 */

template <typename T>
class MilitaryAssembly{
    friend class Iterator<T>;
private:
    Military<T>* head;
public:
    MilitaryAssembly();
    void enqueue(T e);
    T dequeue();
    bool isEmpty();
    Iterator<T> begin();
    Iterator<T> end();
};
#endif ///===========================MilitaryAssembly.h===============================