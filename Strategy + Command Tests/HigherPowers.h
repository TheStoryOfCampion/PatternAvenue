#ifndef HIGHERPOWERS_H
#define HIGHERPOWERS_H

#include <iostream>
#include "Command.h"
#include "Military.h"

class HigherPowers
{
    public:

        void sendAttackInstruction(Command* , std::string, AttackStrategy*, Military*);
        void sendDefendInstruction(Command* , std::string, DefenseStrategy*, Military*);


}; 

#endif