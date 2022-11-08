#ifndef COMMAND_H
#define COMMAND_H

//#include "AttackStrategy.h"
//#include "defenseStrategy.h"
#include "Military.h"



class Command
{

    protected:
        Military* myMilitary;
        //AttackStrategy * aStrategy;
        //DefenseStrategy * dStrategy;

    public:
        Command();
        ~Command();
        virtual void attackInstruction(AttackStrategy*) = 0;
        virtual void defendInstruction(DefenseStrategy*) = 0; 
        void setMilitary(Military *);
        //void setaStrategy(AttackStrategy*);
        //void setdStrategy(DefenseStrategy*);

};


#endif