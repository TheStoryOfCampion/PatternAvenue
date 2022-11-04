#ifndef HIGHGROUND_H
#define HIGHGROUND_H

#include "DefenseStrategy.cpp"

class HighGround:public DefenseStrategy
{
    public:
        ~HighGround();
        virtual void defend();


};

#endif