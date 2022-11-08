#ifndef BLOCKADE_H
#define BLOCKADE_H

#include "AttackStrategy.h"

class Blockade:public AttackStrategy
{
    public:
        //AttackStrategy();
        ~Blockade();
        virtual void attack();


};

#endif