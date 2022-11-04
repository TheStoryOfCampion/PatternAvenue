#ifndef AIRBORNEATTACK_H
#define AIRBORNEATTACK_H

#include "AttackStrategy.cpp"

class AirborneAttack:public AttackStrategy
{
    public:
        ~AirborneAttack();
        virtual void attack();

};

#endif