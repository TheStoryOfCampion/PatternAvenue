#ifndef MILITARY_H
#define MILITARY_H

#include <iostream>

//#include "AttackStrategy.cpp"
//#include "DefenseStrategy.cpp"


class Military
{
    public:

        void attackNow(AttackStrategy* );
        void defendNow(DefenseStrategy* );


};

#endif