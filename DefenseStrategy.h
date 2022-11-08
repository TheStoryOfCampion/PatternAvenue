#ifndef DEFENSESTRATEGY_H
#define DEFENSESTRATEGY_H

class DefenseStrategy
{

    /**
    * 
    * @brief An abstract class which is overridden by the different defense strategies
    * @name DefendCommand 
    * @author Letlhogonolo Simon Rakgantsho
    * 
    */
    public:
        //DefenseStrategy();
        //~DefenseStrategy();
        /**
         * @brief A pure virtual function
         * @return void
         * @note this function is not implemented in this class
         * 
         */
        virtual void defend() = 0; 


};

#endif