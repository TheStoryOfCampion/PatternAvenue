#ifndef HIGHGROUND_H
#define HIGHGROUND_H

#include "DefenseStrategy.h"

/**
 * 
* @brief Implements a type of strategy in war called the HighGround strategy
* @name Fortification
* @author Letlhogonolo Simon Rakgantsho
* 
*/

class HighGround:public DefenseStrategy
{
    public:

    /**
     * @brief Destroy the High Ground object
     * 
     */
        ~HighGround();

    /**
     * @brief Implements the defense strategy to defend against the enemy
     * @return void
     * 
     */
        virtual void defend();


};

#endif