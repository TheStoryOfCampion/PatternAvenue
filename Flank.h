#ifndef FLANK_H
#define FLANK_H

#include "AttackStrategy.cpp"

class Flank:public AttackStrategy
{
    public:
        ~Flank();
        virtual void attack();

};

#endif