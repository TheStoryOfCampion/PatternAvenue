#ifndef MINEFIELD_H
#define MINEFIELD_H

#include "DefenseStrategy.h"

/**
 * 
* @brief Implements a type of strategy in war called the Mine field strategy
* @name MineField
* @author Letlhogonolo Simon Rakgantsho
* 
*/

class Minefield:public DefenseStrategy
{
    public:
    /**
     * @brief Destroy the Minefield object
     * 
     */
        ~Minefield();

    /**
     * @brief Implements the defense strategy to defend against the enemy
     * @return void
     * 
     */
        virtual void defend();


};

#endif