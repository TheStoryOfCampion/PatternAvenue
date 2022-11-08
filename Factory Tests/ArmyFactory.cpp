#include "ArmyFactory.h"

Military* ArmyFactory::EnlistSoldiers()
{
	return new Army();
}