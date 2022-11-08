#ifndef COMMAND_H
#define COMMAND_H

//#include "AttackStrategy.h"
//#include "defenseStrategy.h"
#include "Military.h"

/**
 * @brief Sends Command to the military
 * @name Command class
 * @author Lethlogogonolo Simon Rakgantsho 
 */

class Command
{

    protected:
        Military* myMilitary;
        //AttackStrategy * aStrategy;
        //DefenseStrategy * dStrategy;

    public:
    /**
     * @brief Construct a new Command object
     * 
     */
        Command();
        /**
         * @brief Destroy the Command object
         * 
         */
        ~Command();
         /**
         * @brief pure virtual function which calls the attack Instructions
         * @param AttackStrategy gets objects of type AttackStrategy.
         */
        virtual void attackInstruction(AttackStrategy*) = 0;
        /**
         * @brief pure virtual function which calls the Denfence Instructions
         * @param DefenceStrategy gets objects of type DefenceStrategy.
         */
        virtual void defendInstruction(DefenseStrategy*) = 0; 
         /**
         * @brief Set the Military object
         * 
         */
        void setMilitary(Military *);
        //void setaStrategy(AttackStrategy*);
        //void setdStrategy(DefenseStrategy*);

};


#endif