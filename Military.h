#ifndef MILITARY_H
#define MILITARY_H
#include <iostream>

using namespace std;
/**
 * @brief Military class
 * 
 * Just a bit of it seeing as it works with other parts as well. still very much under construction.
 * 
 * @tparam T 
 */

template <class T>
class Military{
private:
    Military* next;
    Military* prev;
    T Soldier;
public:
    void AttackNow();
    void DefendNow();
    Military();
};

#endif ///......................Military.h.................................