#ifndef BLOCKADE_H
#define BLOCKADE_H

#include "AttackStrategy.cpp"

class Blockade:public AttackStrategy
{
    public:
        //AttackStrategy();
        ~Blockade();
        virtual void attack();


};

#endif