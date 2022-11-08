#ifndef ARMYFACTORY_H
#define ARMYFACTORY_H
#include "MilitaryFactory.h"
#include "Army.h"

/**
 * 
 @brief Initiates an Airborne attack strategy  
 @name ArmyFactory class
 @author Amanda Khuzwayo
 */


class ArmyFactory: public MilitaryFactory
{
	public:
	/**
	 * @brief Enlist Soldiers of type military
	 * 
	 */
		Military* EnlistSoldiers();
};

#endif