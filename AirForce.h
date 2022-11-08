#ifndef AIRFORCE_H
#define AIRFORCE_H
#include "Military.h"

/**
 * 
 @brief Initiates an Airborne attack strategy  
 @name AirForce which inherits Military Functions 
 @author Amanda Khuzwayo
 * 
 */

class AirForce: public Military
{
	public:
	 /**
     * @brief Airforce Constructor
     * 
     */
	   AirForce();
	   /**
         * @brief Virtual function that describes the airbone attck strtegy 
         * 
         */
		virtual void attackNow(AttackStrategy* DS);
		/**
     * @brief Virtual function allows defending  strategy to commence 
	   @param DS allows acceptance of type Defend strategy to allow defending to start 
     * 
     */
		virtual void defendNow(DefenseStrategy* DS);
		/**
     * @brief Virtual function gets army dressed for battle  
	   @param Military allows acceptance of type Military to dress the military
     * 
     */

		virtual void getDressed(Military* clothes);
		/**
     * @brief virtual function that gets the name of the Military 
	   
     * 
     */
		 virtual string  getName();
};

#endif