#ifndef AMBUSH_H
#define AMBUSH_H
/**
 * 
 @brief Initiates an Ambush attack strategy  
 @name Ambush class inheriting from AttackSStrategy
 @author Lethlogogonolo Simon Rakgantsho 
 * 
 */

#include "AttackStrategy.h"

class Ambush:public AttackStrategy
{
    public:
        //AttackStrategy();
          //AttackStrategy();
        /**
         * @brief Destroy the Ambush object
         * 
         */
        ~Ambush();
         /**
         * @brief virtual and calls the attack object
         * 
         */
        virtual void attack();


};

#endif