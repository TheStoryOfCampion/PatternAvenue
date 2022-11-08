#include "attackCommand.h"

/*
attackCommand::attackCommand(Military* military)
{
    myMilitary = military;
}
*/

void attackCommand::attackInstruction(AttackStrategy* AS)
{
    myMilitary->attackNow(AS); 
} 

void attackCommand::defendInstruction(DefenseStrategy* DS ){
    std::cout<<"1111"<<std::endl;
}

/*
void attackCommand::setMilitary(Military * M)
{
    myMilitary = M;
}
*/