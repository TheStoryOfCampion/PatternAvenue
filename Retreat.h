#ifndef RETREAT_H
#define RETREAT_H

#include "DefenseStrategy.h"

/**
 * 
 @brief Activate Retreat Strategy 
 @name  Retreat class
 @author Lethlogogonolo Simon Rakgantsho 
 * 
 */


class Retreat:public DefenseStrategy
{
    public:
    /**
     * @brief Destroy the Retreat object
     * 
     */
        ~Retreat();
        /**
         * @brief virtual function activating defend
         * 
         */
        virtual void defend();


};

#endif