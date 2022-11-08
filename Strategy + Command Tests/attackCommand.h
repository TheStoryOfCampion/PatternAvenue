#ifndef ATTACKCOMMAND_H
#define ATTACKCOMMAND_H

#include <iostream>
#include "Command.h"
#include "AttackStrategy.h"
#include "defenseStrategy.h"
#include"Army.h"
#include"Navy.h"
#include"AirForce.h"


class attackCommand:public Command 
{
    public:

        //attackCommand(Military*);
        virtual void attackInstruction(AttackStrategy* );
        virtual void defendInstruction(DefenseStrategy* );


};

#endif