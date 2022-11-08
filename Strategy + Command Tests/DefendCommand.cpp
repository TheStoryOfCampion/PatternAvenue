#include "DefendCommand.h"

void DefendCommand::defendInstruction(DefenseStrategy* DS)
{
    myMilitary->defendNow(DS);
}

void DefendCommand::attackInstruction(AttackStrategy* AS ){};