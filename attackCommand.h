#ifndef ATTACKCOMMAND_H
#define ATTACKCOMMAND_H

#include <iostream>
#include "Command.h"
#include "AttackStrategy.h"
#include "defenseStrategy.h"
#include"Army.h"
#include"Navy.h"
#include"AirForce.h"

/**
 * 
 @brief Initiates an Airborne attack strategy command
 @name AirborneAttack class
 @author Lethlogogonolo Simon Rakgantsho 
 * 
 */


class attackCommand:public Command 
{
    public:

        //attackCommand(Military*);
        //attackCommand(Military*);
        /**
         * @brief virtual function of intructions to attack
         * 
         * 
         */
        virtual void attackInstruction(AttackStrategy* );
          /**
         * @brief virtual function of intructions to defend
         * 
         */
        virtual void defendInstruction(DefenseStrategy* );


};

#endif