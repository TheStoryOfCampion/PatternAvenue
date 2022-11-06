#include "NavyFactory.h"

Military* NavyFactory::EnlistSoldiers()
{
	return new Navy();
}