#ifndef ITERATOR_H
#define ITERATOR_H
#include <iostream>
#include <algorithm>
#include "Military.h"
#include "MilitaryAssembly.h"
#include "Iterator.cpp"

using namespace std;

/**
 * @brief the Iterator class
 * 
 * Quite a bit still needs to be done. Still need to get it working and get the cpp stuff done
 * 
 * @tparam T 
 */

template <typename T>
class Military;

template <typename T>
class MilitaryAssembly;


template <typename T>
class Iterator{
protected:
    Military<T> *head;
    Military<T> *curr;
    Iterator(const MilitaryAssembly<T>&, Military<T>*);
public:
    Iterator();
    T& operator*();
    Iterator<T> operator++();
    bool operator==(const MilitaryAssembly<T>&) const;

};

#endif