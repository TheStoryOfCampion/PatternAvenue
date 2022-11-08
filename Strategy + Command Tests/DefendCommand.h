#ifndef DEFENDCOMMAND_H
#define DEFENDCOMMAND_H

#include <iostream>
#include "Command.h"
#include "AttackStrategy.h"
#include "DefenseStrategy.h" 
#include"Army.h"
#include"Navy.h"
#include"AirForce.h"
//#include "Military.cpp"


class DefendCommand:public Command
{

    public:
    
        virtual void attackInstruction(AttackStrategy* );
        virtual void defendInstruction(DefenseStrategy* );


};

#endif