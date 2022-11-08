#ifndef CONCRETEGUNS_H
#define CONCRETEGUNS_H
#include "Guns.h"
class ConcreteGuns:public Guns{
 
 public:
 ConcreteGuns(string);
 

private:
    Guns *copied;

};
#endif