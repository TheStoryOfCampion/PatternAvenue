#ifndef AIRFORCEFACTORY_H
#define AIRFORCEFACTORY_H
#include "MilitaryFactory.h"
#include "AirForce.h"

/**
 * 
 @brief Initiates Soldiers fo the military 
 @name AirforceFactory class which inherits from  Military Factory
 @author Amanda Khuzwayo
 * 
 */

class Miltary; 

class AirForceFactory: public MilitaryFactory
{
	public:
	/**
		 * @brief Adds soldiers to the military 
		 * 
		 * @return Military* 
		 */
		Military* EnlistSoldiers();
};

#endif