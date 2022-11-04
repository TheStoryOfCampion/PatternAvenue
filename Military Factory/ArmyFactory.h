#ifndef ARMYFACTORY_H
#define ARMYFACTORY_H
#include "MilitaryFactory.h"
#include "Army.h"

class ArmyFactory: public MilitaryFactory
{
	public:
		Military* EnlistSoldiers();
};

#endif