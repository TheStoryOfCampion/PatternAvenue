#ifndef NAVYFACTORY_H
#define NAVYFACTORY_H
#include "MilitaryFactory.h"
#include "Navy.h"


/**
 * @brief A factory that creates Navy objects
 * @name NavyFactory
 * @author Amanda Khuzwayo
 * 
 */
class NavyFactory: public MilitaryFactory
{
	public:

	/**
	 * @brief Creates new Navy soldiers
	 * 
	 * @return Military* 
	 */
		Military* EnlistSoldiers();
};

#endif