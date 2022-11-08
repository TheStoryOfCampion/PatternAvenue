#ifndef BLOCKADE_H
#define BLOCKADE_H

#include "AttackStrategy.h"

/**
 * 
 @brief Initiates an Airborne attack strategy  
 @name Blockade class
 @author Lethlogogonolo Simon Rakgantsho 
 * 
 */

class Blockade:public AttackStrategy
{
    public:
        //AttackStrategy();
        //AttackStrategy();
        /**
         * @brief Destroy the Blockade object
         * 
         */
        ~Blockade();
          /**
         * @brief virtual function that calls the attack object.
         * 
         */
        virtual void attack();


};

#endif