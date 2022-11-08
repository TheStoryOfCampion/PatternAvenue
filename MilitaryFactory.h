#ifndef MILITARYFACTORY_H
#define MILITARYFACTORY_H
#include "Military.h"

/**
 * @brief A factory that creates Military objects
 * @name MilitaryFactory
 * @author Amanda Khuzwayo
 * 
 */

class MilitaryFactory
{
	private:
		Military* military;
	
	public:

	/**
	 * @brief A pure virtual function
	 * 
	 * @return Military* 
	 */
		virtual Military* EnlistSoldiers() = 0; 
};

#endif