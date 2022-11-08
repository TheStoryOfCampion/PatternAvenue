#ifndef ATTACKSTRATEGY_H
#define ATTACKSTRATEGY_H

/**
 * 
 @brief Initiates an  attack strategy  
 @name  AttackStrategy class
 @author Lethlogogonolo Simon Rakgantsho 
 * 
 */

class AttackStrategy
{
    public:
    
        //AttackStrategy();
        //~AttackStrategy();
        /**
         * @brief Virtual function pure of the attack object
         * 
         */
        virtual void attack() = 0; 


};

#endif