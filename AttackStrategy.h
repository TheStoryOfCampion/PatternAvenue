#ifndef ATTACKSTRATEGY_H
#define ATTACKSTRATEGY_H

#include "Strategy.cpp"

class AttackStrategy:public Strategy
{
    public:
        //AttackStrategy();
        ~AttackStrategy();
        virtual void Execute() = 0;


};

#endif