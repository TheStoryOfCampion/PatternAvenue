#ifndef AIRFORCE_H
#define AIRFORCE_H
#include "Military.h"

class AirForce: public Military
{
	public:
	   AirForce();
		virtual void attackNow(AttackStrategy* DS);
		virtual void defendNow(DefenseStrategy* DS);
		virtual void getDressed(Military* clothes);
		 virtual string  getName();
};

#endif