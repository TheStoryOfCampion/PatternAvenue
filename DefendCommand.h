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

/**
 * @brief @name DefendCommand
 * @brief Sends a defensive command to the soldiers 
 * @author Letlhogonolo Simon Rakgantsho
 * 
 */


class DefendCommand:public Command
{

    public:

    /**
         * @brief 
         * @param AS a parameter of type AttackStartegy for the attack strategy to be used
         * @return void
         * 
         */
    
        virtual void attackInstruction(AttackStrategy* );

        /**
         * @brief 
         * @param DS a parameter of type AttackStartegy for the attack strategy to be used
         * @return void
         * 
         */
        virtual void defendInstruction(DefenseStrategy* );


};

#endif