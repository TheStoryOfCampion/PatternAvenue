#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "DefenseStrategy.cpp"

class Fortification:public DefenseStrategy
{
    public:
        ~Fortification();
        virtual void defend();


};

#endif