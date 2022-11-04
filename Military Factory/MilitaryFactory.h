#ifndef MILITARYFACTORY_H
#define MILITARYFACTORY_H
#include "Military.h"

class MilitaryFactory
{
	private:
		Military* military;
	
	public:
		virtual Military* EnlistSoldiers() = 0; 
};

#endif