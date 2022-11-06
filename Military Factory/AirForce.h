#ifndef AIRFORCE_H
#define AIRFORCE_H
#include "Military.h"

class AirForce: public Military
{
	public:
		void attackNow();
		void defendNow();
		void getDressed(Military* clothes);
};

#endif