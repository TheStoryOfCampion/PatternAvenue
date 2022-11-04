#include "AirForceFactory.h"

Military* AirForceFactory::EnlistSoldiers()
{
	return new AirForce();
}