#ifndef RETREAT_H
#define RETREAT_H

#include "DefenseStrategy.h"

class Retreat:public DefenseStrategy
{
    public:
        ~Retreat();
        virtual void defend();


};

#endif