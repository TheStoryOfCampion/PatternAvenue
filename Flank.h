#ifndef FLANK_H
#define FLANK_H

#include "AttackStrategy.h"

/**
 * 
* @brief Implements a type of strategy in war called the Flank
* @name Flank
* @author Letlhogonolo Simon Rakgantsho
* 
*/

class Flank:public AttackStrategy
{
    public:
        /**
         * @brief Destroy the Flank object
         * 
         */
        ~Flank();

        /**
         * @brief Implements the attack strategy to attack enemy
         * @return void
         * 
         */
        virtual void attack();

};

#endif