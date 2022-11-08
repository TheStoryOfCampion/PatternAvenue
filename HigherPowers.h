#ifndef HIGHERPOWERS_H
#define HIGHERPOWERS_H

#include <iostream>
#include "Command.h"
#include "Military.h"

/**
* 
* @brief Handles all the commands the government or generals wants to send to the Soldiers
* @name HigherPowers
* @author Letlhogonolo Simon Rakgantsho
* 
*/

class HigherPowers
{
    public:
        /**
         * @brief This fuction sends attack instruction to soldiers
         * 
         * @details When called the function will first display the message the higher powers wants to tell the soldiers. Then it sets a military object using the setMilitary function, and finally it sends the strategy to the soldiers which can be the navy, army or airforce, depending on the strategy
         * 
         * @param C An object of type Command
         * @param myString A message to tell soldiers of type string
         * @param S An object of type AttackStrategy to identify which attack strategy to use 
         * @param mili An object of type Military used to set the military object in the command class
         * @returns has a void return type
         * @see sendDefendInstruction(Command* , std::string, AttackStrategy*, Military*)
         * @attention Make sure all parameters are of the coreect types and are entered at the correct sequence
         * 
         */
        void sendAttackInstruction(Command* , std::string, AttackStrategy*, Military*);

        /**
         * @brief This fuction sends attack instruction to soldiers
         * 
         * @details When called the function will first display the message the higher powers wants to tell the soldiers. Then it sets a military object using the setMilitary function, and finally it sends the strategy to the soldiers which can be the navy, army or airforce, depending on the strategy
         * @param C An object of type Command
         * @param myString A message to tell soldiers of type string
         * @param D An object of type DefenseStrategy to identify which defense strategy to use 
         * @param milit An object of type Military used to set the military object in the command class
         * @returns has a void return type
         * @see sendAttackInstruction(Command* , std::string, AttackStrategy*, Military*)
         * @attention Make sure all parameters are of the coreect types and are entered at the correct sequence
         */
        void sendDefendInstruction(Command* , std::string, DefenseStrategy*, Military*);


}; 

#endif