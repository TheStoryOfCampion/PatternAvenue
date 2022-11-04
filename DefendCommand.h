#ifndef DEFENDCOMMAND_H
#define DEFENDCOMMAND_H

#include <iostream>
#include "Command.h"
#include "AttackStrategy.cpp"
#include "DefenseStrategy.cpp" 
//#include "Military.cpp"


class DefendCommand:public Command
{

    public:
    
        virtual void attackInstruction(AttackStrategy* );
        virtual void defendInstruction(DefenseStrategy* );


};

#endif