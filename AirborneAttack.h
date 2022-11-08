#ifndef AIRBORNEATTACK_H
#define AIRBORNEATTACK_H

#include "AttackStrategy.h"

/**
 * 
 @brief Initiates an Airborne attack strategy  
 @name AirborneAttack class
 @author Lethlogogonolo Simon Rakgantsho 
 * 
 */

class AirborneAttack:public AttackStrategy
{
    public:
    /**
     * @brief Destroy the Airborne Attack object
     * 
     */
        ~AirborneAttack();
        /**
         * @brief Virtual function that describes the airbone attck strtegy 
         * 
         */
        virtual void attack();

};

#endif