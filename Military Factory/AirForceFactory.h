#ifndef AIRFORCEFACTORY_H
#define AIRFORCEFACTORY_H
#include "MilitaryFactory.h"
#include "AirForce.h"

class AirForceFactory: public MilitaryFactory
{
	public:
		Military* EnlistSoldiers();
};

#endif