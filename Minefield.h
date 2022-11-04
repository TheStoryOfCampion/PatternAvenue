#ifndef MINEFIELD_H
#define MINEFIELD_H

#include "DefenseStrategy.cpp"

class Minefield:public DefenseStrategy
{
    public:
        ~Minefield();
        virtual void defend();


};

#endif