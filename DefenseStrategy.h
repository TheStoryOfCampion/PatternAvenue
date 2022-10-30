#ifndef DEFENSESTRATEGY_H
#define DEFENSESTRATEGY_H

#include "Strategy.cpp"

class DefenseStrategy:public Strategy
{
    public:
        //DefenseStrategy();
        ~DefenseStrategy();
        virtual void Execute() = 0;


};

#endif