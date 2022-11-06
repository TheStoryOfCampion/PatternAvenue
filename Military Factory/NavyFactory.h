#ifndef NAVYFACTORY_H
#define NAVYFACTORY_H
#include "MilitaryFactory.h"
#include "Navy.h"

class NavyFactory: public MilitaryFactory
{
	public:
		Military* EnlistSoldiers();
};

#endif