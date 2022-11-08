#ifndef AMBUSH_H
#define AMBUSH_H

#include "AttackStrategy.h"

class Ambush:public AttackStrategy
{
    public:
        //AttackStrategy();
        ~Ambush();
        virtual void attack();


};

#endif