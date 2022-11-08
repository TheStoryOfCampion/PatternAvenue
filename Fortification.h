#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "DefenseStrategy.h"

/**
 * 
* @brief Implements a type of strategy in war called the Fotification
* @name Fortification
* @author Letlhogonolo Simon Rakgantsho
* 
*/

class Fortification:public DefenseStrategy
{
    public:
    /**
     * @brief Destroy the Fortification object
     * 
     */
        ~Fortification();

        /**
     * @brief Implements the defense strategy to defend against the enemy
     * @return void
     * 
     */
        virtual void defend();


};

#endif