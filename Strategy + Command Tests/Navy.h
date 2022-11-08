#ifndef NAVY_H
#define NAVY_H
#include "Military.h"

class Miltary ;

class Navy: public Military
{
	public:
		Navy();
		virtual void attackNow(AttackStrategy* DS);
		virtual void defendNow(DefenseStrategy* DS);
		virtual void getDressed(Military* clothes);
		 virtual string  getName();
};

#endif